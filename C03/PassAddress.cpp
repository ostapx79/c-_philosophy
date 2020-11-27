//: C03/PassAddress.cpp
#include <iostream>

void f(int* p) {
    std::cout << "p = " << p << '\n';
    std::cout << "*p = " << *p << '\n';
    *p = 5;
    std::cout << "p = " << p << '\n';
}

int main() {
    int x = 47;
    std::cout << "x = " << x << std::endl;
    std::cout << "&x = " << &x << std::endl;
    f(&x);
    std::cout << "x = " << x << std::endl;
    return 0;
}
