#include "Utils.hpp" //TODO: Fix include path
#include <iostream>
using namespace std;

int main() {
    auto x = Result<int, string>(10);
    cout << *x << endl;
}