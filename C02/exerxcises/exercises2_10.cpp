//: C02/exercises2_10.cpp
// Создайте вектор vector<float> и занесите в него 25 вещеытвеных чисел, как в
// преведущих примерах. Возвведите каждое число в квадрат и сохраните результат
// в исходным элементе вектра. Выведите содержимое вектора до и после возведения
// в квадрат.
#include <iostream>
#include <vector>

int main() {
    std::vector<float> vf;
    for (int i = 0.; i < 10.; i++) {
        vf.push_back(i);
    }
    for (int i = 0; i < vf.size(); i++) {
        std::cout.setf(std::ios::fixed);
        std::cout.precision(2);
        std::cout << vf[i] << ", ";
    }
    std::cout << std::endl;
    for (int i = 0; i < vf.size(); i++) {
        vf[i] *= vf[i];
    }
    for (int i = 0; i < vf.size(); i++) {
        std::cout.setf(std::ios::fixed);
        std::cout.precision(2);
        std::cout << vf[i] << ", ";
    }
    std::cout << std::endl;
    return 0;
}
