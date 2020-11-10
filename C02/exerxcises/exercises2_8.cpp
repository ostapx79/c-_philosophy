//: C02/exercises/exercises2_8.cpp
// Создайте вектор vector<float> и занесите в него 25 вещественных чисел цикле
// for. Выведите содержимое вектора.
#include <string>
#include <iostream>
#include <vector>

int main() {
    std::vector<float> vi;
    for (float numb_i = 0.; numb_i < 26.; numb_i++) {
        vi.push_back(numb_i);
    }
    for (int numb_j = 0; numb_j < vi.size(); numb_j++) {
        std::cout.setf(std::ios::fixed);
        std::cout.precision(1);
        std::cout << vi[numb_j] << ", ";
    }
    std::cout << std::endl;
    return 0;
}
