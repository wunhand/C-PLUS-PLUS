#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>

std::string find_mode(const std::vector<std::string>& strings) {
    std::map<std::string, int> frequency;
    for (const auto& str : strings) {
        frequency[str]++;
    }

    int max_count = 0;
    std::string mode;
    for (const auto& pair : frequency) {
        if (pair.second > max_count) {
            max_count = pair.second;
            mode = pair.first;
        }
    }
    return mode;
}

int main() {
    std::vector<std::string> strings;
    std::string input;

    std::cout << "Enter strings (type 'end' to finish): " << std::endl;
    while (std::cin >> input && input != "end") {
        strings.push_back(input);
    }

    if (strings.empty()) {
        std::cout << "No strings were entered." << std::endl;
        return 1;
    }

    std:: sort(strings.begin(), strings.end());

    std::string min = strings.front();
    std::string max = strings.back();
    std::string mode = find_mode(strings);

    std::cout << "Minimum: " << min << std::endl;
    std::cout << "Maximum: " << max << std::endl;
    std::cout << "Mode: " << mode << std::endl;

    return 0;
}