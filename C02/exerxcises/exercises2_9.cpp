//: C02/exercises/exercises2_9.cpp
// Создайте три объекта vector<float> и заполните первые два объекта так, как в
// преведущем примере. Напишите цикл for, который суммирует соответствующие
// элементы первых двух векторов и заносит результат в соответствующий элементы
// третьего вектора. Выведите содержимое всех трех векторов.
#include <iostream>
#include <vector>

int main() {
    std::vector<float> vf1, vf2, vf3;

    for (float numb_i = 0.f; numb_i < 10.f; numb_i++) {
        vf1.push_back(numb_i);
    }
    int numb_j;
    for (numb_j = 0; numb_j < vf1.size(); numb_j++) {
        std::cout.setf(std::ios::fixed);
        std::cout.precision(1);
        std::cout << vf1[numb_j] << ", ";
    }
    std::cout << std::endl;
    
    for (float numb_k = 0.f; numb_k < 10.f; numb_k++) {
        vf2.push_back(numb_k);
    }
    int numb_h;
    for (numb_h = 0; numb_h < vf2.size(); numb_h++) {
        std::cout.setf(std::ios::fixed);
        std::cout.precision(1);
        std::cout << vf2[numb_h] << ", ";
    }
    std::cout << std::endl;

    for (float numb_f = 0.f; numb_f <= vf1.size() + vf2.size(); numb_f++) {
        vf3.push_back(numb_f);
    }
//    int numb_i_j;
//    for (numb_i_j = 0; numb_i_j < vf3.size(); numb_i_j++) {
//        vf3[numb_i_j] += vf1[numb_j];
//        vf3[numb_i_j] += vf2[numb_h];
//        vf3[numb_i_j] += vf3[numb_i_j];
//    }
    for (int numb = 0; numb < vf3.size(); numb++) {
        std::cout.setf(std::ios::fixed);
        std::cout.precision(1);
        std::cout << vf3[numb] << ", ";
    }
    std::cout << std::endl;
    return 0;
}
