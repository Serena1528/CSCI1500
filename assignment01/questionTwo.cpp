#include <iostream>

int main(){
    double length;
    double width;
    double height;
    double surfaceArea;
    double volume;

    std::cout << "Enter the box's length in inches ";
    std::cin >> length;
    std::cout << "Enter the box's width in inches ";
    std::cin >> width;
    std::cout << "Enter the box's height in inches ";
    std::cin >> height;

    surfaceArea = 2*((length*width) + (length*height) + (width*height));
    volume = length*width*height;

    std::cout<<"Box surface area = " << surfaceArea << " square inches" << std::endl;
    std::cout<<"Box volume = " << volume << " cubic inches" << std::endl;


}