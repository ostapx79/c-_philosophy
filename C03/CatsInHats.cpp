//: C03/CatsInHats.cpp
// Простая демонстрация рекурсии
#include <iostream>

void removeHat(char cat) {
    for (char c = 'A'; c < cat; c++) {
        std::cout << "  ";
    }
    if (cat <= 'Z') {
        std::cout << "cat " << cat << '\n';
        removeHat(cat + 1); // Рекурсивный вызов
    } else {
        std::cout << "VOOM!!!!" << std::endl;
    }
}

int main() {
    removeHat('A');
    return 0;
}
