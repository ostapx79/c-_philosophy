//: C03/Charlist.cpp
// Вывод всех символов ASCII
// Демонстрация цикла "for"
#include <iostream>

int main() {
    for (int numb_i = 0; numb_i < 128; numb_i++) {
        if (numb_i != 26) {
            std::cout << " value: " << numb_i
                << " character: "
                << char(numb_i)
                << std::endl;
        }
    }
    return 0;
}
