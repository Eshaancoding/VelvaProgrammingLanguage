#include "Functions.hpp"

double FFI_Functions::cos_v (double x) { return cos(x); }
double FFI_Functions::sin_v (double x) { return sin(x); }
double FFI_Functions::tan_v (double x) { return tan(x); }
void FFI_Functions::prints (const char *s) { printf("%s", s); }
void FFI_Functions::printd (double d) { printf("%f", d); }
void FFI_Functions::printi (int i) { printf("%i", i); }