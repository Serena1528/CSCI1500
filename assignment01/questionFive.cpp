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