#include <iostream>

int main() {
    std::cout << "Enter 3 values: " << std::endl;
    int a, b, c;
    std::cin >> a >> b >> c;
    if (a > b && b >c) {
        std::cout << c << ", " << b << ", " << a << std::endl;
    }
    else if (a > c && c > b) {
        std::cout << b << ", " << c << ", " << a << std::endl;
    }
    else if (b > a && a > c) {
        std::cout << c << ", " << a << ", " << b << std::endl;
    }
    else if (b > c && c > a) {
        std::cout << a << ", " << c << ", " << b << std::endl;
    }
    else if (c > a && a > b) {
        std::cout << b << ", " << a << ", " << c << std::endl;
    }
    else if (c > b && b > a) {
        std::cout << a << ", " << b << ", " << c << std::endl;
    }
    else if (a == b && b == c) {
        std::cout << a << ", " << b << ", " << c << std::endl;
    }
    else if (a == b && b > c) {
        std::cout << c << ", " << a << ", " << b << std::endl;
    }
    else if (a == c && c > b) {
        std::cout << b << ", " << a << ", " << c << std::endl;
    }
    else if (b == c && c > a) {
        std::cout << a << ", " << b << ", " << c << std::endl;
    }
    else if (b == c && c < a) {
        std::cout << c << ", " << b << ", " << a << std::endl;
    }
    else if (a == b && b < c) {
        std::cout << a << ", " << b << ", " << c << std::endl;
    }
    else if (a == c && c < b) {
        std::cout << a << ", " << c << ", " << b << std::endl;
    }
    return 0;
}