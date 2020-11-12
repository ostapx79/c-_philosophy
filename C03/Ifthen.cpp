//: C03/Ifthen.cpp
// Условные команды if и else
#include <iostream>

int main() {
    int numb_i;
    std::cout <<"type a number and 'Enter'" << std::endl;
    std::cin >> numb_i;
    if (numb_i > 5) {
        std::cout << "It's greater than 5 " << std::endl;
    } else {
        if (numb_i < 5) {
            std::cout << "It's less than 5 " << std::endl;
        } else {
            std::cout << "It's equal to 5 " << std::endl;
        }
    }
    std::cout << "type a number and 'Enter'" << std::endl;
    std::cin >> numb_i;
    if (numb_i < 10) {
        if (numb_i > 5) { // Вложеная команда "if"
            std::cout << "5 < numb_i < 10" << std::endl;
        } else {
            std::cout << "numb_i <= 5" << std::endl;
        }
    } else { // Соответствует условию "if (numb_i < 10)"
        std::cout << "numb_i >= 10" << std::endl;
    }
    return 0;
}
