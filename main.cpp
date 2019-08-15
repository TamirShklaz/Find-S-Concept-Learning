#include <iostream>
#include <vector>
#include "Instance.h"

using namespace std;
vector<Instance> instances = {
        {{"Sunny", "Warm", "Normal", "Strong", "Warm", "Same"},   true},
        {{"Sunny", "Warm", "High",   "Strong", "Warm", "Same"},   true},
        {{"Rainy", "Cold", "High",   "Strong", "Warm", "Change"}, false},
        {{"Sunny", "Warm", "High",   "Strong", "Cool", "Change"}, true}

};

int main() {
    Instance hypothesis({"", "", "", "", "", ""}, true);
    for (Instance i: instances) {
        if (i.enjoySport) {
            for (int k = 0; k < i.vals.size(); k++) {
                if (hypothesis.vals[k] != i.vals[k]) {
                    if (hypothesis.vals[k] == "") {
                        hypothesis.vals[k] = i.vals[k];
                    } else {
                        hypothesis.vals[k] = "?";
                    }
                }
            }
        }

    }
    cout << hypothesis << endl;
    return 0;
}