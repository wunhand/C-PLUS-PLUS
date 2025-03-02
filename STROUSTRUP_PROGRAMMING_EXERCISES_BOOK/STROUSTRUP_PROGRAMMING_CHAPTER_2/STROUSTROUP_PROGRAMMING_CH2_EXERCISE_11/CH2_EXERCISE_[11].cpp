#include <iostream>

int main() {
    std::cout << "How many pennies do you have? " << std::endl;
    int pennies;
    std::cin >> pennies;
    std::cout << "How many nickels do you have? " << std::endl;
    int nickels;
    std::cin >> nickels;
    std::cout << "How many dimes do you have? " << std::endl;
    int dimes;
    std::cin >> dimes;
    std::cout << "How many quarters do you have? " << std::endl;
    int quarters;
    std::cin >> quarters;
    std::cout << "How many half dollars do you have? " << std::endl;
    int half_dollars;
    std::cin >> half_dollars;
    std::cout << "How many dollar coins do you have? " << std::endl;
    int dollar_coins;
    std::cin >> dollar_coins;
    if (pennies == 1) {
        std::cout << "You have " << pennies << " penny." << std::endl;
    } else {
        std::cout << "You have " << pennies << " pennies." << std::endl;
    }
    if (nickels == 1) {
        std::cout << "You have " << nickels << " nickel." << std::endl;
    } else {
        std::cout << "You have " << nickels << " nickels." << std::endl;
    }
    if (dimes == 1) {
        std::cout << "You have " << dimes << " dime." << std::endl;
    } else {
        std::cout << "You have " << dimes << " dimes." << std::endl;
    }
    if (quarters == 1) {
        std::cout << "You have " << quarters << " quarter." << std::endl;
    } else {
        std::cout << "You have " << quarters << " quarters." << std::endl;
    }
    if (half_dollars == 1) {
        std::cout << "You have " << half_dollars << " half dollar." << std::endl;
    } else {
        std::cout << "You have " << half_dollars << " half dollars." << std::endl;
    }
    if (dollar_coins == 1) {
        std::cout << "You have " << dollar_coins << " dollar coin." << std::endl;
    } else {
        std::cout << "You have " << dollar_coins << " dollar coins." << std::endl;
    }
    int total = pennies + nickels * 5 + dimes * 10 + quarters * 25 + half_dollars * 50 + dollar_coins * 100;
    std::cout << "The value of all of your coins is " << total << " cents." << std::endl;
    return 0;
}