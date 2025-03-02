#include <iostream>

int main() {
    std::cout << "Enter the name of the person you want to write to" << std::endl;
    std::string letter_name;
    std::cin >> letter_name;
    std::cout << "Dear " << letter_name << "," << std::endl;
    std::cout << "\tHow are you? I am fine. I miss you." << std::endl;
    std::cout << "We have not seen each other in a long time." << std::endl;
    std::cout << "Give me the name of another friend." << std::endl;
    std::string friend_name;
    std::cin >> friend_name;
    std::cout << "Have you seen " << friend_name << " lately?" << std::endl;
    std::cout << "Please enter your current age." << std::endl;
    int age;
    std::cin >> age;
    std::cout << "I hear you just had a birthday and you are " << age << " years old." << std::endl;
    if (age <= 0 || age >= 110) {
        std::cerr << "You're kidding!" << std::endl;
    }
    if (age < 12) {
        std::cout << "Next year you will be " << age + 1 << "." << std::endl;
    }
    if (age == 17) {
        std::cout << "Next year you will be able to vote." << std::endl;
    }
    if (age > 70) {
        std::cout << "Are you retired?" << std::endl;
    }
    std::cout << "Yours sincerely," << std::endl;
    std::cout << "David" << std::endl;
    return 0;
}