#include <iostream>

int square_add(int v) {
    int u = 0;
    for (int w = 0; w < v; w++) {
        u += v;
    }
    return u;
}

int main() {

std::cout << "Enter number to square: " << std::endl;
    int v;
    std::cin >> v;
    std::cout << "Square of " << v << " is " << square_add(v) << std::endl;

return 0;
}