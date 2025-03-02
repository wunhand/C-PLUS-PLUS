#include <iostream>

int main() {
    std::cout << "Enter number value" << std::endl;
    int number;
    std::cin >> number;
    std::cout << "Enter string values" << std::endl;
    std::string str1;
    std::cin >> str1;
    std::string str2;
    std::cin >> str2;
    std::cout << "number == number = " << (number == number) << std::endl;
    std::cout << "number + 2 = " << number + 2 << std::endl;
    std::cout << "number - 2 = " << number - 2 << std::endl;
    std::cout << "number * 2 = " << number * 2 << std::endl;
    std::cout << "number / 2 = " << number / 2 << std::endl;
    std::cout << "number % 2 = " << number % 2 << std::endl;
    std::cout << "str1 == str2 = " << (str1 == str2) << std::endl;
    std::cout << "str1 + str2 = " << str1 + " " + str2 << std::endl;
    if (str1 == str2) {
        std::cout << "str1 = str2" << std::endl;
    }
    if (str1 < str2) {
        std::cout << str1 << " is alphabetically before " << str2 << std::endl;
    }
    if (str1 > str2) {
        std::cout << str1 << " is alphabetically after " << str2 << std::endl;
    }
    return 0;
}