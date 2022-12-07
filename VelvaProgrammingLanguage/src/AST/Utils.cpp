#include "Utils.hpp"

string NameRegistry::use(const string &prefix) {
    names[prefix] = names.count(prefix) ? ++names[prefix] : 0;
    return prefix + "_" + to_string(names[prefix]);
}
