#include <iostream>

int main() {
    // Variables definition
    const int conversionRate = 14;
    int desiredMiles = 0;
    int lapsNeeded = 0;

    // Prompt user and read input
    std::cout << "Enter number of miles to jog: ";
    std::cin >> desiredMiles;

    // Calculate laps needed
    lapsNeeded = desiredMiles * conversionRate;

    // Display result
    std::cout << "You need to jog " << lapsNeeded << " laps" << std::endl;

    return 0;
}