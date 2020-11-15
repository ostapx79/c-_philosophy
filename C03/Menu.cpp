//: C03/Menu.cpp
// Простая система меню
// для демонстрации команд "break" и "continue"
#include <iostream>

int main() {
    char c; // Переменная для хранения ввода
    while (true) {
        std::cout << "MAIN MENU:" << std::endl;
        std::cout << "l: left. r: right. q: quit -> ";
        std::cin >> c;
        if (c == 'q') {
            break; // Выход из while(1)
        } else if (c == 'l') {
            std::cout << "LEFT MENU:" << std::endl;
            std::cout << "select a or b: ";
            std::cin >> c;
            if (c == 'a') {
                std::cout << "you chose 'a'" << std::endl;
                continue; // Возрат к главному мену
            } else if (c == 'b') {
                std::cout << "you chose 'b'" << std::endl;
                continue; // Возрат к главному мену
            } else {
                std::cout << "you didn't choose a or b!" << std::endl;
                continue; // Возрат к главному мену
            }
        } else {
            if (c == 'r') {
                std::cout << "RIGHT MENU:" << std::endl;
                std::cout << "select c or d: ";
                std::cin >> c;
                if (c == 'c') {
                    std::cout << "you chose 'c'" << std::endl;
                    continue; // Возврат к главному мену
                } else if (c == 'd') {
                    std::cout << "you chose 'd'" << std::endl;
                    continue; // Возврат к главному мену
                } else {
                    std::cout << "you did't choose c or d!" << std::endl;
                    continue; // Возврат к главному мену
                }
            }       
        }
        std::cout << "you must type l or r or q!" << std::endl;
    }
    std::cout << "quitting menu..." << std::endl;
    return 0;
}
