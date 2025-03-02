#include <iostream>
#include <vector>
#include <limits>

int main() {
    std::vector<double> numbers;
    double number;
    double sum = 0;
    double smallest = std::numeric_limits<double>::max();
    double largest = std::numeric_limits<double>::lowest();

    std::cout << "Enter numbers: ";
    while (std::cin >> number) {
        numbers.push_back(number);
        sum += number;
        if (number < smallest) {
            smallest = number;
        }
        if (number > largest) {
            largest = number;
        }
    }

    if (!numbers.empty()) {
        double mean = sum / numbers.size();
        std::cout << "The sum is: " << sum << std::endl;
        std::cout << "The smallest number is: " << smallest << std::endl;
        std::cout << "The largest number is: " << largest << std::endl;
        std::cout << "The mean value is: " << mean << std::endl;
    } else {
        std::cout << "Invalid entry." << std::endl;
    }

    return 0;
}
