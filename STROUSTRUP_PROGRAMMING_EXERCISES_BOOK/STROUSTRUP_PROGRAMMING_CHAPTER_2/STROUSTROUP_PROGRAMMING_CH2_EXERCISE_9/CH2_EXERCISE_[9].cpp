#include <iostream>

int main() {
    std::cout << "Enter a digit string: " << std::endl;
    std::string digit;
    std::cin >> digit;

    if (digit == "zero") {
        std::cout << 0 << std::endl;
    } else if (digit == "one") {
        std::cout << 1 << std::endl;
    } else if (digit == "two") {
        std::cout << 2 << std::endl;
    } else if (digit == "three") {
        std::cout << 3 << std::endl;
    } else if (digit == "four") {
        std::cout << 4 << std::endl;
    } else {
        std::cout << "not a number I know" << std::endl;
    }
    return 0;
}