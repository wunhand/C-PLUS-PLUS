#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

struct Person {
    std::string name;
    int age;
};

int main() {
    std::vector<Person> people;
    std::string name;
    int age;

    std::cout << "Enter name and age: " << std::endl;
    while (true) {
        std::cout << "Name: ";
        std::cin >> name;
        if (name == "done")
            break;
        
            std::cout << "Age: ";
            std::cin >> age;

            auto it = std::find_if(people.begin(), people.end(), [name](const Person& person) {
                return person.name == name;
            });

            if (it != people.end()) {
                std::cout << "Name already exists!" << std::endl;
            } else {
                people.push_back({name, age});
            }
    }

    std::cout << "People: " << std::endl;
    for (const auto& person : people) {
        std::cout << person.name << " " << person.age << std::endl;
    }
}