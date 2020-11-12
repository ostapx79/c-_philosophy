//: C03/Guess.cpp
// Угадывание числа (демонстрация цыкла while)
#include <iostream>

int main(){
    int secret = 15;
    int guess = 0;
    // "!=" - проверка условия "не равно":
    while (guess != secret) {
        std::cout << "guess the number: ";
        std::cin >> guess;
    }
    std::cout << "You guessed it!" << std::endl;
    return 0;
}
