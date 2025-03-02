#include <iostream>
#include <string>

int main() {

    std::string str;
    std::cout << "Enter a word: " << std::endl;
    std::getline(std::cin, str);

    for (char c : str) {
        std::cout << c << " " << static_cast<int>(c) << std::endl;
    
    }

    return 0;
}