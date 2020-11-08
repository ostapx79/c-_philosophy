//: C02/exerxises/exercises2_4.cpp
// Напишете программу для подсчета чисел вхождений зданного слова в файл (для
// поиска слова воспользуйтесь оператором == класса string).
#include <string>
#include <iostream>
#include <fstream>

int main() {
    std::ifstream in("exercises2_4.cpp");
    std::string word;
    word == "words";

    int count = 0;
    while (in >> word) {
        count++;
    }
    std::cout << "Количесто слов " << word << " ровно => " << count << std::endl;
    in.close();
    return 0;
}
