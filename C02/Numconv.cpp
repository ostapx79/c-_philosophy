//: C02:Numbconv.cpp
// Преоброзование десятичных чисел в восьмеричную и шестнадцатеричную форму
#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a decimal number: ";
    cin >> number;
    cout << "value in octal = 0"
        << oct << number << endl;
    cout << "value in hex = 0x"
        << hex << number << endl;
} //:~
