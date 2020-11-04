//: C02/exercises/Stream2.cpp
// Взяв за образец программы Stream2.cpp и Numconv.cpp, напишите программу,
// которая запрашивает радиус круга и выводит его площадь. Для вычисления
// квадрата радиуса воспользуйтесь оператором *. Не пытатесь выводить значение в
// восмеричном или шестнадцатеричном представлнении (они работают только с
// целыми числами).
#include <iostream>
#include <cmath>

int main() {
    using namespace std;
    int radius;

    cout << "Введите радиус круга => ";
    cin >> radius;
    cout << "Диаметр круга => " << radius * 2 << endl;
    cout.setf(ios::fixed);
    cout.precision(3);
    cout << "Длина окрности => " << 2 * M_PI * radius << endl;
    cout.setf(ios::fixed);
    cout.precision(3);
    cout << "Площадь равна => " << radius * radius * M_PI << endl;

    return 0;
}
