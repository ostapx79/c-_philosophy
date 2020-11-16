//: C03/Menu2.cpp
// Пример с меню с использованием команд switch.
#include <iostream>

int main() {
    bool quit = false; // флаг выхода
    while (quit == false) {
        std::cout << "Select a, b, c or q to quit: ";
        char response;
        std::cin >> response;
        switch (response) {
            case 'a': std::cout << "you chose 'a'" << '\n';
                      break;
            case 'b': std::cout << "you chose 'b'" << '\n';
                      break;
            case 'c': std::cout << "you chose 'c'" << '\n';
                      break;
            case 'q': std::cout << "quitting menu" << '\n';
                      quit = true;
                      break;
            default : std::cout << "Please use a, b, c, or q!" << '\n';
        }
    }
    return 0;
}
