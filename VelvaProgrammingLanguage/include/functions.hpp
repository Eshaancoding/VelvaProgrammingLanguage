#include <cstdio>

extern "C" void printi(int i) {
    printf("%i", i);
}

extern "C" void printd(double d) {
    printf("%f", d);
}

extern "C" void prints(const char *s) {
    printf("%s", s);
}

