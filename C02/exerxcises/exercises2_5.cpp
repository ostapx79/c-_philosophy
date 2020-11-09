//: C02/exercises2_5.cpp
// Измените программу Fillvector.cpp так, чтобы строки выводились в обратном
// порядке (от последней к первой).
#include <iostream>
#include <string>
#include <fstream>
#include <vector>

int main() {
    using namespace std;
    vector<string> vs;
    ifstream in("exercises2_5.cpp");
    string line;
    while (getline(in, line)) {
        vs.push_back(line);
    }
    cout << vs.size() << endl;
    for (int i = vs.size(); i > 0; i--) {
        cout << i << vs[i] << endl;
    }
    int numb_i = vs.size();
    while (numb_i >= 0) {
        cout << numb_i << vs[numb_i] << endl;
        numb_i--;
    }
    return 0;
}
