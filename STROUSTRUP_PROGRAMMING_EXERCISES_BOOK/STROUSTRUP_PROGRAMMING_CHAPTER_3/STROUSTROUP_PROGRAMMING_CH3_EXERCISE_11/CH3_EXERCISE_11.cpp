#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

std::string getComputerChoice() {
    std::srand(time(0));
    int randomChoice = std::rand() % 3;
    switch(randomChoice) {
        case 0:
            return "rock";
        case 1:
            return "paper";
        case 2:
            return "scissors";
    }
    return "";
}

std::string getWinner(std::string userChoice, std::string computerChoice) {
    if (userChoice == computerChoice) {
        return "It's a tie!";
    } else if ((userChoice == "rock" && computerChoice == "scissors") || 
               (userChoice == "paper" && computerChoice == "rock") || 
               (userChoice == "scissors" && computerChoice == "paper")) {
        return "You win!";
    } else {
        return "Computer wins!";
    }
}

int main() {
    std::string userChoice;
    std::cout << "Enter rock, paper, or scissors: ";
    std::cin >> userChoice;

    std::string computerChoice = getComputerChoice();
    std::cout << "Computer choice: " << computerChoice << endl;
    
    std::string result = getWinner(userChoice, computerChoice);
    std::cout << result << endl;
    return 0;

}