#include <iostream>
#include <cmath>
#include <limits>
#include <string>

bool is_valid_unit(const std::string& unit) {
    return unit == "cm" || unit == "m" || unit == "in" || unit == "ft";
}

int main() {
    double smallest = std::numeric_limits<double>::max();
    double largest = std::numeric_limits<double>::lowest();
    int value_count = 0;

    int i = 0;
    while (i < 1) {
        double val1, val2;
        std::string unit1, unit2;
        std::cout << "Enter two numbers with units (cm, m, in ,ft): ";
        std::cin >> val1 >> unit1 >> val2 >> unit2;

        if (!is_valid_unit(unit1) || !is_valid_unit(unit2)) {
            std::cout << "Invalid unit. Please enter correct value" << std::endl;
            continue;
        }

        value_count += 2;

        if (val1 < val2) {
        std::cout << "The smaller value is: " << val1 << unit1 << " and the larger value is: " << val2 << unit2 << std::endl;
        } else if (val1 > val2) {
        std::cout << "The smaller value is: " << val2 << unit2 << " and the larger value is: " << val1 << unit1 << std::endl;
        } else {
        std::cout << "The numbers are equal." << std::endl;
        }

        if (std::abs(val1 - val2) < 0.01) {
            std::cout << "The numbers are almost equal." << std::endl;
        }

        if (val1 < smallest) {
            smallest = val1;
            std::cout << val1 << unit1 << " is the smallest so far." << std::endl;
        }

        if (val2 < smallest) {
            smallest = val2;
            std::cout << val2 << unit2 << " is the smallest so far." << std::endl;
        }
        if (val1 > largest) {
            largest = val1;
            std::cout << val1 << unit1 << " is the largest so far." << std::endl;
        }
        if (val2 > largest) {
            largest = val2;
            std::cout << val2 << unit2 << " is the largest so far." << std::endl;
        }

        ++i;
    }

    char input;
    while (true) {
        std::cout << "Enter character | to exit: ";
        std::cin >> input;
        if (input == '|') {
            break;
        }
        std::cout << "You entered: " << input << std::endl;
    }
}