// 5. Write a program that converts a liquid measurement given in ounces into the 
// equivalent
// measurement given in quarts and ounces. The program should first prompt the 
// user to enter the
// total ounces amount, read the number in, and then convert and display what that 
// total ounce
// amount is equal to in quarts and ounces. You should assume that the total number 
// of ounces
// entered will be a positive integer. Note that the number of quarts and remainder 
// ounces will also
// be integer values. Conversion fact: 1 quart = 32 ounces. Here is what output 
// should look like
// from running the program (user input is shown in bold):
// Enter number of ounces: 68
// 68 oz. = 2 qt. 4 oz.
// Hint: Make use of the integer division and modulus operators.
// 5:
// Variables needed:
// oz: user input of ounces as an integer
// int(qt: oz / 32)
// remaningOz: oz % 32
// pseudocode:
// display: “Enter number of ounces: “
// oz = user input as an integer
// int(qt: oz / 32)
// remaningOz: oz % 32
// display: oz + “ oz. = “ + qt + “ qt. “ + remaningOz + “ oz.
#include <iostream>

int main(){
    int oz;
    int qt;
    int remaningOz;

    std::cout<<"Enter number of ounces: ";
    std::cin>> oz;

    qt = oz / 32;
    remaningOz = oz %32;

    std::cout<< oz << " oz. = " << qt<<" qt. "<<remaningOz<<" oz"<<std::endl;
}