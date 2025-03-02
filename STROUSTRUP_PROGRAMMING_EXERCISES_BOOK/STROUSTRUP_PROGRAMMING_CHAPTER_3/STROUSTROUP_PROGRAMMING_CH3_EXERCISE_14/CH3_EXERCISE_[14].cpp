#include <iostream>
#include <cmath>

bool is_prime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int next_prime(int num) {
    int next = num + 1;
    while (!is_prime(next)) {
        next++;
    }
    return next;
}
int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    std::cout << "The next prime number is: " << next_prime(num) << std::endl;
    return 0;

}