#include <iostream>
#include <string>
#include <vector>


std::vector<int> primeNumbersUpTo(int limit) {
    std::vector<int> primes;
    for (int i = 2; i <= limit; i++) {
        bool isPrime = true;
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            primes.push_back(i);
        }
    }
    return primes;
}

int main() {

    std::vector<int> primeNumbers = primeNumbersUpTo(100);

    for (int i = 0; i < primeNumbers.size(); i++) {
        std::cout << primeNumbers[i] << std::endl;
    }
return 0;
}

