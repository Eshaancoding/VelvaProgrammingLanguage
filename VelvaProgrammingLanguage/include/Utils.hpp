#ifndef UTILS_INCLUDED
#define UTILS_INCLUDED

#include <variant>
#include <functional>
#include <iostream>
#include <type_traits>

using namespace std;

// /**
//  * @brief A class representing a success and failure type.
//  * The Result class represents the result of an operation that can fail. It has two values — a success return type (the default), and an error return type
//  * @tparam T The return type on success.
//  * @tparam E The return type on failure
//  */
// template<class T, class E>
// class Result {
//     private:
//         variant<T, E> value;
//     public:
//         /**
//         * @brief Construct a new successful Result object
//         * 
//         * @param value The return value
//         */
//         Result(T value) : value(value) {};
//         /**
//          * @brief Construct a new Result object with a failure
//          * 
//          * @param error Error information
//          */
//         Result(E error) : value(error) {};
//         /**
//          * @brief Returns the value on success — throws an exception on failure
//          * Use this when you know the operation is successful, and want to get the value; it is unsafe in all other cases.
//          * @return T The successful value
//          */
//         T operator*();
//         /**
//          * @brief Check if the Result holds success or failure
//          * Use standard if and ternary statement syntax to check if a value is a success or a failure. For instance, one can use result ? 1 : 0 to return 1 on success, and 0 on failure.
//          * @return true Returns true on success.
//          * @return false Returns false on failure
//          */
//         bool operator bool();
//         /**
//          * @brief Check if the Result holds success or failure
//          * Use this function to check if it has success or failure. This produces the exact same output as operator bool.
//          * @return true Returns true on success.
//          * @return false Returns false on failure
//          */
//         bool hasValue();
//         /**
//          * @brief Call different functions inline depending on if the value is a success or a failure
//          * visit can make some code cleaner by easily allowing you to switch code paths inline depending on a result's value.
//          * @param success The lambda to call on success. Receives a mutable reference to the successful value
//          * @param err The lambda to call on failure. Receives a mutable reference to the error value
//          */
//         void visit(function<void(&T)> success, function<void(&E)> err);
//         /**
//          * @brief Call different functions inline depending on if the value is a success or a failure, and return a value.
//          * This is used when you want to switch code paths inline and return a value.
//          * @tparam ret The value to return.
//          * @param success The function to call on success; should return an object of type ret.
//          * @param err The function to call on failure; should return an object of type ret.
//          * @return ret 
//          */
//         template <class ret>
//         ret visit(function<ret(&T)> success, function<ret(&E)> err);
//         /**
//          * @brief This function is called if you want to create a string representation. It is only available if it is an error.
//          * 
//          * @return string The generated string.
//          */
//         string to_string();
// };

// template<class T, class E>
// T Result<T,E>::operator*() {
//     if (const auto val = get_if<T>(&value) ; val) {
//         return *val;
//     } else {
//         //cerr << value->to_string() << endl;
//         throw get<E>(value);
//     }
// }


// template<class T, class E>
// bool Result<T,E>::operator bool() {
//     return holds_alternative<T>(value);
// }

// template<class T, class E>
// bool Result<T,E>::hasValue() {
//     return holds_alternative<T>(value);
// }

// template<class T, class E, class ret>
// ret Result<T,E>::visit(function<ret(&T)> success, function<ret(&E)> err)  {
//     if(this->hasValue()) return success(**this) else return err(**this);
// }

// template<class T, class E>
// void Result<T,E>::visit(function<void(&T)> success, function<void(&E)> err) {
//     if(this->hasValue()) success(**this) else err(**this);
// }

// template<class T, class E>
// string Result<T,E>::to_string() {
//     return get<E>(value).to_string();
// }

// template<class T, class E>
// std::string Result<T,E>::to_string() {
//     return get<E>(value)->to_string();
// }

// template<class T, class E>
// std::string Result<T,E>::to_string() {
//     throw "this function call does not work";
// }

/**
 * @brief Use this in order to overload lambdas.
 * Simply type Overload { [](char a) { ... lambda 1 ... }, [](int a) { ... lambda 1 ... } , ...} for whatever types, and it just works!
 * @tparam Ts An internal type representing the types of all of the lambdas
 */
template<typename ... Ts>                                  
struct Overload : Ts ... { 
    using Ts::operator() ...;
};
template<class... Ts> Overload(Ts...) -> Overload<Ts...>; 


class NameRegistry {
    private:
        map<string, int> names;
    public:
        NameRegistry();
        string use_name(const string &prefix);
}

string NameRegistry::use_name(const string &prefix) {
    names[prefix] = names.count(prefix) ? ++names[prefix] : 0;
    return prefix + "_" + names[prefix];
}
#endif

 