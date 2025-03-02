#include <iostream>

int main() {
    std::cout << "This is a program to convert miles into kilometers.  Enter miles: " << std::endl;
    double miles;
    std::cin >> miles;
    std::cout << "Kilometers: " << miles * 1.609 << std::endl;
    return 0;
}
