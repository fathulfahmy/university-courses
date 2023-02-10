/*************************************************************
AUTHOR: SW01081798 Muhammad Fathul Fahmy Bin Mohd Nizam
DATE: 15/09/2022
DESCRIPTION: a program containing 3 functions to compute the following properties of a cylinder
INPUT: radius (r), height (h)
OUTPUT: Volume
FORMULA: π = 3.142
Diameter = r * 2
Surface area = 2 * π * r * (r + h)
Volume = π * r2 * h
CONDITION: NA
*************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;
//  Funtion
float calcDiameter(float);
float calcArea(float, float);
float calcVolume(float, float);
// Main
int main()
{
    float radius = 0, height = 0;
    cout << "Enter radius (cm) :";
    cin >> radius;
    cout << "Enter height (cm) :";
    cin >> height;
    // Method 1
    cout << fixed;
    cout << "Diameter: " << setprecision(5) << calcDiameter(radius) << endl;
    // Method 2
    cout << "Area: " << fixed << setprecision(6) << calcArea(radius, height) << endl;
    
    cout << "Volume: " << calcVolume(radius, height) << endl;
    return 0;
}
// Calculate Diameter
float calcDiameter(float radius)
{
    float diameter;
    diameter = 2 * radius;
    return diameter;
}

// Calculate Area
float calcArea(float radius, float height)
{
    float area;
    area = 2 * 3.142 * radius * (radius + height);
    return area;
}

// Calculate Volume
float calcVolume(float radius, float height)
{
    float volume;
    volume = 3.142 * 2 * radius * height;
    return volume;
}

/*
Enter radius (cm):5
Enter height (cm):10
Diameter: 10
Area: 471.3
Volume: 314.2
*/