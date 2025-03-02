#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>

int main() {
    std::vector<double> values;
    std::cout << "Please enter values (press Enter without typing a number to stop):" << std::endl;

    double value;
    while (true) {
        std::cin >> value;
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            break;
        }
        values.push_back(value);
    }

    if (values.empty()) {
        std::cout << "No values were entered." << std::endl;
        return 1;
    }

    std::sort(values.begin(), values.end());

    double median;
    if (values.size() % 2 == 0) {
        median = (values[values.size() / 2 - 1] + values[values.size() / 2]) / 2;
    } else {
        median = values[values.size() / 2];
    }

    std::cout << "Median value: " << median << std::endl;

    return 0;
}