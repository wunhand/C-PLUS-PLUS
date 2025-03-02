#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    int number;
    int guess;
    int attempts = 7;
    int low =1;
    int high = 100;

    std::cout << "Enter a number for program to guess:" << std::endl;
    std::cin >> number;

    if (number < 1 || number > 100) {
        std::cout << "Only numbers between 1 and 100 are valid inputs." << std::endl;
        return 1;
    }

    std::srand(std::time(0));

    std::cout << "The program has up to 7 attempts to guess number:" << std::endl;

    for (int i = 0; i < attempts; ++i) {
        guess = low + (std::rand() % (high - low + 1));
        std::cout << "Attempting guess number" << (i +1) << ": " << guess << std::endl;
    
        if (guess == number) {
            std::cout << "Correct number chosen." << std::endl;
            return 0;
        } else if (guess < number) {
            std::cout << "Guess is too low." << std::endl;
            low = guess + 1;
        } else {
            std::cout << "Guess is too high." << std::endl;
            high = guess - 1;
        }
            
    }

    std::cout << "Program was unable to guess number." << std::endl;
    return 0;
}