#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main() {
    std::vector<std::string> words;
    std::vector<std::string> disliked = {"broccoli", "cauliflower", "carrot"};
    std::string input;

    std::cout << "Please enter words: (type end to finish):" << std::endl;

    while (std::cin >> input && input != "end") {
        words.push_back(input);
    }

    std::cout << "You entered: " << std::endl;
    for (const std::string& word : words) {
        if (std::find(disliked.begin(), disliked.end(), word) != disliked.end()) {
            std::cout << "BLEEP" << std::endl;
        } else {
        std::cout << word << std::endl;
        }
    }

    return 0;
}