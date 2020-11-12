//: C03/Guess2.cpp
// Угадывание числа с использованием цикла do-while
#include <iostream>

int main() {
    int secret = 10;
    int guess; // инициализация не нужна
    do {
        std::cout << "guess the number: ";
        std::cin >> guess; // Здесь происходит инициализация
    } while (guess != secret);
    std::cout << "You got it!" << std::endl;
    return 0;
}
