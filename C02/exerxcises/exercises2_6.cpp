//: C02/exercises/exercises2_6.cpp
// Измените программу Fillvector.cpp так, чтобы перед выводом все элементы
// вектора объединялись в одну стороку (нумерация строк при этом не нужна).
#include <string>
#include <iostream>
#include <fstream>
#include <vector>

int main() {
    using namespace std;
    vector<string> vs;
    ifstream in("exercises2_6.cpp");
    string line;

    while (getline(in, line)) {
        vs.push_back(line);
    }
    for (int i = 0; i < vs.size(); i++) {
        cout << vs[i];
    }
    return 0;
}
