//: C02:FillString.cpp
//  Чтитение всего файла в отдельную строку
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream in("FillString.cpp");
    string s, line;
    while (getline(in, line)) {
        s += line + '\n';
    }
    cout << s;
    return 0;
} ///:~
