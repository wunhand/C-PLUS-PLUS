#include <iostream>
#include <string>

int main() {
    std::cout << "Provide operation: " << std::endl;
    std::string operation;
    std::cin >> operation;
    std::cout << "Provide operand 1: " << std::endl;
    double operand1;
    std::cin >> operand1;
    std::cout << "Provide operand 2: " << std::endl;
    double operand2;
    std::cin >> operand2;

    if (operation == "+" || operation == "plus") {
        std::cout << operand1 + operand2 << std::endl;
    } else if (operation == "-" || operation == "minus") {
        std::cout << operand1 - operand2 << std::endl;
    } else if (operation == "*" || operation == "mul") {
        std::cout << operand1 * operand2 << std::endl;
    } else if (operation == "/" || operation == "div") {
        std::cout << operand1 / operand2 << std::endl;
    } else {
        std::cout << "Invalid operation" << std::endl;
    }
    return 0;
}