
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    
    cout << "Enter the number of feet:" << endl;
int feet;
cin >> feet;
int InchesPerFoot = 12;
int Inches = feet * InchesPerFoot;
    cout << fixed << setprecision(2) << feet << " ft = " << Inches << " inches" << endl;

int InchesPerYard = 36;
double Yards = Inches / InchesPerYard;
    cout << fixed << setprecision(2) << feet << " ft = "<< Yards << " yards" << endl;

double cmPerInch = 2.54;
double Centimeters = Inches * cmPerInch;
    cout << fixed << setprecision(2) << feet << " ft = "<< Centimeters << " cm" << endl;

double MeterPercm = 100;
double Meters = Centimeters / MeterPercm;
    cout << fixed << setprecision(2) << feet << " ft = " << Meters <<" meters" << endl;

  return 0;
}