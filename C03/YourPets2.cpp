//: C03/YourPets2.cpp
#include <iostream>

int dog, cat, bird, fish;

void f(int pet) {
    std::cout << "pet id number: " << pet << '\n';
}

int main() {
    int i, j, k;
    std::cout << "f(): " << (long)&f << '\n';
    std::cout << "dog: " << (long)&dog << '\n';
    std::cout << "cat: " << (long)&cat << '\n';
    std::cout << "bird: " << (long)&bird << '\n';
    std::cout << "fish: " << (long)&fish << '\n';
    std::cout << "i: " << (long)&i << '\n';
    std::cout << "j: " << (long)&j << '\n';
    std::cout << "k: " << (long)&k << '\n';
    return 0;
}
