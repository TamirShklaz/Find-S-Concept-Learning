//
// Created by tamir on 2019/08/15.
//

#ifndef AS3_INSTANCE_H
#define AS3_INSTANCE_H

#include <string>
#include <vector>
#include <ostream>

using namespace std;

class Instance {

public:
    Instance(const vector<string> &vals, bool enjoySport);

    friend ostream &operator<<(ostream &os, const Instance &instance);

public:
    vector<string> vals;


    bool enjoySport;
};


#endif //AS3_INSTANCE_H
