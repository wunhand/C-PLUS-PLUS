#include <iostream>

int main() {
    double num = 0;
    std::cout << "Enter a number: " << std::endl;
    while (std::cin >> num) {
        int i = num;
        char c = i;
        std::cout << "num = " << num << std::endl;
        std::cout << "i = " << i << std::endl;
        std::cout << "c = " << c << std::endl;
        std::cout << "char(" << c << ") = " << static_cast<int>(c) << std::endl;
        break;
    }
    return 0;
}