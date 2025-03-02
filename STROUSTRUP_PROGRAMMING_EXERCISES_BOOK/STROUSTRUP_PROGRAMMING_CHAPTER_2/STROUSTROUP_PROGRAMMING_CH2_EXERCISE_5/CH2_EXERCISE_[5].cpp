#include <iostream>

int main() {
    std::cout << "Provide 2 numbers: " << std::endl;
    double val1, val2;
    std::cin >> val1 >> val2;
    std::cout << "Sum: " << val1 + val2 << std::endl;
    std::cout << "Difference: " << val1 - val2 << std::endl;
    std::cout << "Product: " << val1 * val2 << std::endl;
    std::cout << "Ratio: " << val1 / val2 << std::endl;
    std::cout << "Larger: " << (val1 > val2 ? val1 : val2) << std::endl;
    std::cout << "Smaller: " << (val1 < val2 ? val1 : val2) << std::endl;
    return 0;
}