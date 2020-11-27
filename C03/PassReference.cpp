//: C03/PassReference.cpp
#include <iostream>

void f(int& r) {
    std::cout << "r = " << r << std::endl;
    std::cout << "&r = " << &r << std::endl;
    r = 5;
    std::cout << "r = " << r << std::endl;
}

int main() {
    int x = 47;
    std::cout << "x = " << x << std::endl;
    std::cout << "&x = " << &x << std::endl;
    f(x); // Выглядит как передача по значению, но в действительности аргумент передается по ссылке.
    std::cout << "x = " << x << std::endl;
}
