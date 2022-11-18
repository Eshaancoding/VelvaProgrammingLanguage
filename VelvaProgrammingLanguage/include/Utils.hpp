#ifdef UTILS_INCLUDED
#define UTILS_INCLUDED

#include <variant>
#include <functional>
#include <iostream>
#include <type_traits>

template<class T, class E>
class Result {
    private:
        variant<T, E> value;
    public:
        Result(T value) : value(value) {};
        Result(E error) : value(error) {};
        T operator*() const;
        bool operator bool() const;
        bool hasValue() const;
        void visit(function<void(T)> success, function<void(E)> err) const;
        template <class ret>
        void visit(function<ret(T)> success, function<ret(E)> err) const;
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
    return holds_available<T>(value);
}

template<class T, class E>
bool Result<T,E>::hasValue() {
    return holds_available<T>(value);
}

template<class T, class E, class ret>
bool Result<T,E>::visit(function<ret(T)> success, function<ret(E)> err)  {
    if(this->hasValue()) return success(**this) else return err(**this);
}

template<class T, class E>
bool Result<T,E>::visit(function<void(T)> success, function<void(E)> err)  {
    if(this->hasValue()) success(**this) else err(**this);
}

template<class T, class E>
string Result<T,E>::to_string() {
    return get<E>(value).to_string();
}

template<class T, class E>
string Result<T,E>::to_string() {
    return get<E>(value)->to_string();
}


#endif