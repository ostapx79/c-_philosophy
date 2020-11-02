//: C02:Scopy.cpp
// Построочное копирование файлов
#include <string>
#include <fstream>
using namespace std;

int main() {
    ifstream in("Scopy.cpp"); // Открытие файла для копирование
    ofstream out("Scopy2.cpp"); // Открыетие файла для записи
    string s;
    while (getline(in, s)) { // Символ навой строки при читение теряется...
        out << s << '\n'; // ... поэтому его необходимо передать отдельно.
    }

    return 0;
} ///:~
