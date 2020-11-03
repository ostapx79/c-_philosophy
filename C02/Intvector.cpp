//: C02:Intvectr.cpp
// Создание вектора для хранение целых чисел.
#include <iostream>
#include <vector>

int main() {
    using namespace std;
    vector<int> v;
    for (int i = 0; i < 10; i++) {
        v.push_back(i);
    }
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << ", ";
    }
    cout << endl;
    for (int i = 0; i < v.size(); i++) {
        v[i] = v[i] * 10; // Присваевание
    }
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << ", ";
    }
    cout << endl;
    return 0;
}
