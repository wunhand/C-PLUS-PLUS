#include <iostream>
#include <cstdlib>
#include <vector>
#include <map>

int main() {
    std::vector<int> numbers;
    int num;

    std::cout << "Enter positive integers: " << std::endl;
    while (std::cin >> num && num >= 0) {
        numbers.push_back(num);
    }

    if (numbers.empty()) {
        std::cout << "No positive integers entered." << std::endl;
        return 0;
    }

    std::map<int, int> frequency;
    for (std::vector<int>::iterator it = numbers.begin(); it != numbers.end(); ++it) {
        frequency[*it]++;
    }

    int mode = numbers[0];
    int max_count = 0;
    for (std::map<int, int>::iterator it = frequency.begin(); it != frequency.end(); ++it) {
        if (it->second > max_count) {
            mode = it->first;
            max_count = it->second;
        }
    }

    std::cout << "Mode: " << mode << " and frequency " << max_count << std::endl;
}