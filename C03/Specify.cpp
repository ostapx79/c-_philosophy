//: C03/Specify.cpp
// Использования спецификаторов
#include <iostream>

int main() {
    char c;
    unsigned char uc;
    int i;
    unsigned int ui;
    short int si;
    short s; // Эквивалент short int
    unsigned short int usi;
    unsigned short us;
    long int li;
    long  l; // Эквивалент long int
    unsigned long int uli;
    unsigned long ul;
    float f;
    double d;
    long double ld;
    std::cout 
        << "\n char = " << sizeof(c) << "\n unsigned char = " << sizeof(uc)
        << "\n int = " << sizeof(i) << "\n unsigned int = " << sizeof(ui)
        << "\n short = " << sizeof(s) << "\n unsigned short = " << sizeof(us)
        << "\n long = " << sizeof(l) << "\n unsigned long = " << sizeof(ul)
        << "\n float = " << sizeof(f) << "\n double = " << sizeof(d)
        << "\n long double = " << sizeof(ld)
        << std::endl;
    return 0;
}
