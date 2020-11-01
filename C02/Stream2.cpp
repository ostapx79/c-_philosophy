//: C02:Stream.cpp
// Дополнительные возможности потоков
#include <iostream>
using namespace std;

int main() {
    // Определение формата при помощи манипуляторов:
    cout << "a number in decimal: "
        << dec << 15 << endl;
    cout << "in octal: " << oct << 15 << endl;
    cout << "in hex: " << hex << 15 << endl;
    cout << "a floating-point number: "
        << 3.14159 << endl;
    cout << "non-printing char (escape): "
        << char(227) << endl;
} ///:~
