#ifndef UTILS_INCLUDED
#define UTILS_INCLUDED

#include <variant>
#include <functional>
#include <iostream>
#include <type_traits>

using namespace std;

template<class T, class E>
class Result {
    private:
        variant<T, E> value;
    public:
        Result(T value) : value(value) {};
        Result(E error) : value(error) {};
        T operator*();
        bool operator bool();
        bool hasValue();
        void visit(function<void(&T)> success, function<void(&E)> err);
        template <class ret>
        ret visit(function<ret(&T)> success, function<ret(&E)> err);
        string to_string();
};

template<class T, class E>
T Result<T,E>::operator*() {
    if (const auto val = get_if<T>(&value) ; val) {
        return *val;
    } else {
        //cerr << value->to_string() << endl;
        throw get<E>(value);
    }
}


template<class T, class E>
bool Result<T,E>::operator bool() {
    return holds_alternative<T>(value);
}

template<class T, class E>
bool Result<T,E>::hasValue() {
    return holds_alternative<T>(value);
}

template<class T, class E, class ret>
ret Result<T,E>::visit(function<ret(&T)> success, function<ret(&E)> err)  {
    if(this->hasValue()) return success(**this) else return err(**this);
}

template<class T, class E>
void Result<T,E>::visit(function<void(&T)> success, function<void(&E)> err) {
    if(this->hasValue()) success(**this) else err(**this);
}

template<class T, class E>
<<<<<<< HEAD
std::string Result<T,E>::to_string() {
    static_assert(!is_pointer<E>());
=======
string Result<T,E>::to_string() {
>>>>>>> 6f03afca8870c947dca9e1e6606515e2551cb707
    return get<E>(value).to_string();
}

template<class T, class E>
<<<<<<< HEAD
std::string Result<T,E>::to_string() {
    static_assert(is_pointer<E>());
=======
string Result<T,E>::to_string() {
>>>>>>> 6f03afca8870c947dca9e1e6606515e2551cb707
    return get<E>(value)->to_string();
}

template<class T, class E>
std::string Result<T,E>::to_string() {
    throw "this function call does not work";
}

template<typename ... Ts>                                  
struct Overload : Ts ... { 
    using Ts::operator() ...;
};
template<class... Ts> Overload(Ts...) -> Overload<Ts...>; 

#endif