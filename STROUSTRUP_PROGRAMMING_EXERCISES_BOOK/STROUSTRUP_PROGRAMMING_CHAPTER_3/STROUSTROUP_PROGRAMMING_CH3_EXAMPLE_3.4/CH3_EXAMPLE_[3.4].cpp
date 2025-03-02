#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::cout << "Enter type of currency: " << std::endl;
    std::string currency;
    std::cin >> currency;
    std::cout << "Enter amount: " << std::endl;
    double amount;
    std::cin >> amount;
    if (currency == "y") {
        std::cout << "Amount in dollars: " << amount * 0.0067 << std::endl;
    } else if (currency == "k") {
        std::cout << "Amount in dollars: " << amount * 0.089 << std::endl;
    } else if (currency == "p") {
        std::cout << "Amount in dollars: " << amount * 1.26 << std::endl;
    } 
    else if (currency == "f") {
        std::cout << "Amount in dollars: " << amount * 1.11 << std::endl;
    } else {
        std::cout << "wrong currency" << std::endl;
    }

    int a = 97;
    while (a < 123) {
        std::cout << char(a) << " " << a << std::endl;
        a++;
    }
    for (int t = 97; t < 123; t++) {
        std::cout << char(t) << " " << t << std::endl;
        std::cout << char(toupper(t)) << " " << t << std::endl;
    }
    return 0;
}