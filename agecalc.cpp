#include <iostream>


int main () {

    std::string name;

    int currentyear;
    int birthyear;

    // User inputs Full name // 

    std::cout << "Whats your Full Name? " << '\n';
    std::getline(std::cin,name);

    // User inputs current year //

    std::cout << "Whats the current year?: " << '\n';
    std::cin >> currentyear;

    // User inputs birthyear //

    std::cout << "What year were your born on? " << "\n";
    std::cin >> birthyear;

    // Program outputs Name and age // 

    std::cout << "Hello, " << name << '\n';
    std::cout <<"You are: " << currentyear - birthyear << " Years old" << '\n';

    return 0;
    
    }
    
