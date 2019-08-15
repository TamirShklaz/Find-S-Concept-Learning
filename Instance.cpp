//
// Created by tamir on 2019/08/15.
//

#include "Instance.h"

Instance::Instance(const vector<string> &vals, bool enjoySport) : vals(vals), enjoySport(enjoySport) {}

ostream &operator<<(ostream &os, const Instance &instance) {
    string s = "<";
    for (int i = 0; i < instance.vals.size(); i++) {
        s += instance.vals[i];
        if (i + 1 != instance.vals.size()) {
            s += ", ";
        }
    }
    s += ">";
    os << s;
    return os;
}
