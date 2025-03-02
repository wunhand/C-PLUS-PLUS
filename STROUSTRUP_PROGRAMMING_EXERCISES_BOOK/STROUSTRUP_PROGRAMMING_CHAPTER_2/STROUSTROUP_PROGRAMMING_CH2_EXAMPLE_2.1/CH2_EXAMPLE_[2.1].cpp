#include <iostream>

int main() {
    std::cout << "Enter first name:" << std::endl;
    std::string first_name;
    std::cin >> first_name;
    std::cout << "Hi, " << first_name << "!";
    return 0;
}