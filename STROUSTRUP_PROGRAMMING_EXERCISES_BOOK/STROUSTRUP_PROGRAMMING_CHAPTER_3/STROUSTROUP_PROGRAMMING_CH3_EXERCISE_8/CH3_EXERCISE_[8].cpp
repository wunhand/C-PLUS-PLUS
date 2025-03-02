#include <iostream>
#include <string>
#include <vector>

int main() {

    std::string value1;
    char value2;
    std::string value3;
    std::vector<std::string> word_values = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    std::vector<std::string> number_values = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};

    std::cout << "Enter a value: " << std::endl;
    std::cin >> value1;
    std::cout << "Enter an operantion value: " << std::endl;
    std::cin >> value2;
    std::cout << "Enter a second value: " << std::endl;
    std::cin >> value3;

    switch (value2) {
        case '+':
            for (int i = 0; i < word_values.size(); i++) {
                if (value1 == word_values[i]) {
                    value1 = number_values[i];
                }
                if (value3 == word_values[i]) {
                    value3 = number_values[i];
                }
            }
            std::cout << "The sum of " << value1 << " and " << value3 << " is " << std::stoi(value1) + std::stoi(value3) << std::endl;
            break;
        case '-':
            for (int i = 0; i < word_values.size(); i++) {
                if (value1 == word_values[i]) {
                    value1 = number_values[i];
                }
                if (value3 == word_values[i]) {
                    value3 = number_values[i];
                }
            }
            std::cout << "The difference of " << value1 << " and " << value3 << " is " << std::stoi(value1) - std::stoi(value3) << std::endl;
            break;
        case '*':
            for (int i = 0; i < word_values.size(); i++) {
                if (value1 == word_values[i]) {
                    value1 = number_values[i];
                }
                if (value3 == word_values[i]) {
                    value3 = number_values[i];
                }
            }
            std::cout << "The product of " << value1 << " and " << value3 << " is " << std::stoi(value1) * std::stoi(value3) << std::endl;
            break;
        case '/':
            for (int i = 0; i < word_values.size(); i++) {
                if (value1 == word_values[i]) {
                    value1 = number_values[i];
                }
                if (value3 == word_values[i]) {
                    value3 = number_values[i];
                }
            }
            std::cout << "The division of " << value1 << " and " << value3 << " is " << std::stoi(value1) / std::stoi(value3) << std::endl;
            break;
        default:
            std::cout << "Invalid operation" << std::endl;
            break;
    }
    
    return 0;

}