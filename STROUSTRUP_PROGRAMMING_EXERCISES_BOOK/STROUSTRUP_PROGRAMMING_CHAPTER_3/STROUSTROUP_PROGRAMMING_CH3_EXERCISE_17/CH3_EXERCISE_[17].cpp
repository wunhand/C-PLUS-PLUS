#include <iostream>
#include <cmath>
#include <limits>

int main() {
    double a, b ,c;

    std::cout << "Enter a, b, c: " << std::endl;
    std::cin >> a >> b >> c;

    if (std::cin.fail()) {
        std::cerr << "Invalid input" << std::endl;
        return 1;
    }

    if (a == 0) {
        std::cerr << "a cannot be zero" << std::endl;
        return 1;
    }

    double discriminant = b * b - 4 * a * c;
    if (discriminant > 0) {
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        std::cout << "Roots are real and different" << std::endl;
        std::cout << "Root 1: " << root1 << std::endl;
        std::cout << "Root 2: " << root2 << std::endl;
    } else if (discriminant == 0) {
        double root = -b / (2 * a);
        std::cout << "Roots are real and same" << std::endl;
        std::cout << "Root: " << root << std::endl;
    } else {
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        std::cout << "Roots are complex and different" << std::endl;
        std::cout << "Root 1: " << realPart << " + " << imaginaryPart << "i" << std::endl;
        std::cout << "Root 2: " << realPart << " - " << imaginaryPart << "i" << std::endl;
        std::cout << "The equation has no real roots" << std::endl;
    }
    
    return 0;
}