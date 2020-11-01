//: C02:HelloString.cpp
// Пример использования стандартного класса С++ string
#include <string>
#include <iostream>
using namespace std;

int main() {
    string s1, s2; // Пустые строки
    string s3 = "Hello. World!"; // Инициализированная строка
    string s4("I-am"); // Другой пример инциализации
    s2 = "Today"; // присваивание
    s1 = s3 + " " + s4; // Слияние строк
    s1 += " 8 "; // Присоединение новых символов к строке
    cout << s1 + s2 + '!' << endl;
} ///:~
