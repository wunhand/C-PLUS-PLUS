#include <iostream>

int main() {
    double num1, num2;
    char symbol;

    std::cout << "Enter first number: " << std::endl;
    std::cin >> num1;
    std::cout << "Enter operation symbol: " << std::endl;
    std::cin >> symbol;
    std::cout << "Enter second number: " << std::endl;
    std::cin >> num2;

    switch (symbol) {
        case '+':
            std::cout << num1 + num2 << std::endl;
            break;
        case '-':
            std::cout << num1 - num2 << std::endl;
            break;
        case '*':
            std::cout << num1 * num2 << std::endl;
            break;
        case '/':
            std::cout << num1 / num2 << std::endl;
            break;
        default:
            std::cout << "Please choose correct operation symbol" << std::endl;
            break;
    }
}