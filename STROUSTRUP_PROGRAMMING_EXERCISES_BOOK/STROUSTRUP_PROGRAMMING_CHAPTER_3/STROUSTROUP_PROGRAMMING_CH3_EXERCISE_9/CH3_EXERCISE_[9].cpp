#include <iostream>

int main() {
    unsigned long long grains;
    std::cout << "Enter number of grains: " << std::endl;
    std::cin >> grains;

    unsigned long long total_grains = 0;
    int square = 0;

    while (total_grains < grains) {
        total_grains += std::pow(2, square);
        square++;
    }

    std::cout << "Total number of squares is " << square << std::endl;
    return 0;
}