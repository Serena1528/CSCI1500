#include <iostream>

int main(){
    int quarters;
    int dimes;
    int nickels;
    int pennies;
    double totalValue;

    std::cout<<"Enter number of quarters: ";
    std::cin>> quarters; 
    std::cout<<"Enter number of dimes: ";
    std::cin>> dimes;
    std::cout<<"Enter number of nickels: ";
    std::cin>> nickels;
    std::cout<<"Enter number of pennies: ";
    std::cin>> pennies;

    totalValue = (0.25*quarters) + (0.1*dimes) + (0.05*nickels) + (0.01*pennies);

    std::cout<< quarters << " quarters, " << dimes << " dimes, " << nickels << " nickles, and " << pennies << " pennies = $" << totalValue << std::endl;

}