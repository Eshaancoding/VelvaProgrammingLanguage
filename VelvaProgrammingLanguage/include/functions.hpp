#ifndef FUNCTIONS
#define FUNCTIONS
#include <cstdio>
#include <cmath> 
#include <string>

extern "C" namespace FFI_Functions {
    void printi(int i);
    void printd(double d);
    void prints(const char *s);
    double cos_v(double x);
    double sin_v(double x);
    double tan_v(double x);
};

#endif