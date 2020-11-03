//: C02:Fillvector.cpp
// Копирование всего содержимого файла в вектор строк
#include <string>
#include <iostream>
#include <fstream>
#include <vector>

int main() {
    using namespace std;
    vector<string> v;
    ifstream in("Fillvector.cpp");
    string line;
    while (getline(in, line)) {
        v.push_back(line); // Занесение строки в конце вектора
    }
    // Нумерация строк:
    for (int i = 0; i < v.size(); i++) {
        cout << i << ": " << v[i] << endl;
    }
    return 0;
}
