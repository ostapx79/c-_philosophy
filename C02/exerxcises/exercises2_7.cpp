//: C02/exercises/exercises2_7.cpp
// Выводите содержимое фала по срокам. После  вывода  каздой сроки программа
// должна ждать, пока пользователь не нажмет enter.
#include <string>
#include <iostream>
#include <fstream>
#include <vector>

int main() {
    using namespace std;
    vector<string> vs;
    ifstream in("exercises2_7.cpp");
    string line;
    while (getline(in, line)) {
        vs.push_back(line);
    }
    for (int numb_i = 0; numb_i < vs.size(); numb_i++) {
        cout << vs[numb_i] << getchar();
    }
    return 0;
}
