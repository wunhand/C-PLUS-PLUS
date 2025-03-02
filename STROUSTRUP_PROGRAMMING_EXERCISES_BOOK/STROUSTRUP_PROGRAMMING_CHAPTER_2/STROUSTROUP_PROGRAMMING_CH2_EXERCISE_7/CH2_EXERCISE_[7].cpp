#include <iostream>
#include <string>

int main() {
    std::cout << "Enter 3 names: " << std::endl;
    std::string a, b, c;
    std::cin >> a >> b >> c;

    if (a > b) std::swap(a, b);
    if (a > c) std::swap(a, c);
    if (b > c) std::swap(b, c);

    std::cout << a << ", " << b << ", " << c << std::endl;
    
    return 0;
}