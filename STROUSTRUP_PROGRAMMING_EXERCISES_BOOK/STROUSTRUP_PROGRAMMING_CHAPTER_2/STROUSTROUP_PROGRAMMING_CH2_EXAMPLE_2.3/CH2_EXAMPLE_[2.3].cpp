#include <iostream>

int main() {
    std::cout << "Please enter your first name: " << std::endl;
    std::string first_name;
    std::cin >> first_name;
    std::cout << "Please enter your age: " << std::endl;
    double age;
    std::cin >> age;
    double month_age = age * 12;
    std::cout << "Hello, " << first_name << " (age " << month_age << ")!" << std::endl;
    return 0;
}