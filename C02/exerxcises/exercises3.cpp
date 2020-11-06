//: C02/exercises/exercises3.cpp
// Напишите программу, которая открывает файл и подсчитывает количество слов,
// резделенных прорусками.
#include <string>
#include <iostream>
#include <fstream>

int main() {
    using namespace std;
    ifstream in("exercises3.cpp");
    string s, word;
    int count = 0;
    while (in >> word) {
        s += word + '\n';
        count++;
    }
    cout << s;
    cout << count << endl;
    return 0;
}
