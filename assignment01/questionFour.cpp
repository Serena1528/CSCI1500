#include <iostream>

int main(){
    double feet;
    double inches;
    double yards;
    double cm;
    double m;
    
    std::cout<<"Enter number of feet: ";
    std::cin>>feet;

    inches = feet*12;
    yards=inches/36;
    cm=inches*2.54;
    m=cm/100;

    std::cout<< yards<<" yards"<<std::endl;
    std::cout<<inches<<" inches"<<std::endl;
    std::cout<<cm<<" cm"<<std::endl;
    std::cout<<m<<" m"<<std::endl;
}