//: C03/Return.cpp
// Использование команды "return"
#include <iostream>

char cfunc(int i) {
    if (i == 0)
        return 'a';
    if (i == 1)
        return 'g';
    if (i == 5)
        return 'z';
    return 'c';
}

int main() {
    std::cout << "type an integer: ";
    int val;
    std::cin >> val;
    std::cout << cfunc(val) << std::endl;

    return 0;
}
