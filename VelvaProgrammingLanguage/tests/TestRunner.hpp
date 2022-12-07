#include <error.h>
#include <vector>
#include <future>
#include <tuple>
using namespace std;

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

/**
 * @brief This is the only public class exposed by the testing framework. This represents a single component of the test.
 * 
 */
class TestSuite {
    private:
        vector<TestCase> cases;
        string name;
    public:
        /**
         * @brief Construct a new Test Suite
         * 
         * @param name The name that you would like to give to your test suite
         */
        TestSuite(string name) : name(name) {};
        /**
         * @brief Add a single case to your test.
         * 
         * @param fn The lambda to execute when calling your test.
         * @param name The name of your test case
         */
        void add(function<void()> fn, string name) const noexcept {
            const TestCase tc = {fn, name};
            cases.push_back(&tc);
        }
        /**
         * @brief Executes the test suite, printing results in the console.
         * Console output has three symbols:
         * ✅ — Test succeeded
         * ❌ — Test failed, with error message provided
         * ☢️ — Test threw an exception (crashed), with error message provided
         */
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
};

/**
 * @brief Asserts if something is true. If it's false, the test fails.
 * 
 * @param e The boolean.
 * @param error_msg Message if false
 */
void require(bool e, string error_msg) {
    if(!e) throw TestError(error_msg);
}