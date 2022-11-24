using namespace std;
#include <error>
#include <vector>
#include <future>
#include <tuple>

class TestError : public exception {
    private:
        string msg;
    public:
        TestError(string msg) : msg(msg) {}

        virtual const char *what() const noexcept {
            return msg.c_str();
        }
};

struct TestCase {
    function<void()> fn;
    string name;
};

class TestSuite {
    private:
        vector<TestCase> cases;
        string name;
    public:
        TestSuite(string name) : name(name) {};
        void add(function<void()> fn, string name) const noexcept {
            cases.push_back(TestCase {fn, name});
        }
        void run() const {
            vector<future<int>> results;
            cout << name << ":" << endl;
            for (auto &_case: cases) {
                results.push_back(async([=]() {
                    try {
                        _case.fn();
                        cout << _case.name << ": ✅" << endl;
                    } catch(TestError &e) {
                        cout << _case.name << ": ❌" << endl << "\t" << e.what() << endl;
                    } catch(exception &e) {
                        cout << _case.name << ": ☢️" << endl << "\t" << e.what() << endl;
                    }
                    return 0;
                }));
            }
            for (auto &f : results) {
                f.get();
            }
        }
}

void assert(bool e, string error_msg) {
    if(!e) throw TestError(msg);
}