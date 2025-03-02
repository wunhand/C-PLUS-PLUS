#include <iostream>
#include <string>
#include <vector>

int main() {
    std::vector<std::string> number_words = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int input;
    std::cout << "Enter a number: ";
    std::cin >> input;
    if (input < 0 || input > 9) {
        std::cout << "Invalid input" << std::endl;
    } else {
        std::cout << "The number " << input << " is " << number_words[input] << std::endl;
    }
    std::cout << "The word number " << number_words[input] << " is converted back to " << input << std::endl;

    return 0;
}