#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string previous;
    std::string current;
    std::vector<std::string> repeated_words;
    std::unordered_map<std::string, int> repeated_words_count;

    std::cout << "Enter a sentence: ";
    while (std::cin >> current) {
        if (previous == current) {
            repeated_words.push_back(current);
        }
        previous = current;
    }

    if (!repeated_words.empty()) {
        std::cout << "The repeated words are: ";
        for (const auto& word : repeated_words) {
            std::cout << word << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "No words were repeated." << std::endl;
    }
   
    return 0;
}