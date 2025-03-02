#include <iostream>

int main() {
    std::cout << "Enter a number: ";
    int number;
    std::cin >> number;
    if (number % 2 == 0) {
        std::cout << "The number is even." << std::endl;
    } else {
        std::cout << "The number is odd." << std::endl;
    }
    return 0;
}