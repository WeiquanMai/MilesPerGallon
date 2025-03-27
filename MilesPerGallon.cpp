/*
CSC-120- Intro to Comp Sci/OOP
Project Name: MilesPerGallon
Student: Weiquan Mai
Date: September 21, 2024
Description: This program asks user for information regarding their car, and then calculates the car's mile per gallon.
*/

#include <iostream>
using namespace std;

int main ()
{
	double gallons, miles, mileage;

cout << "This program calculates a car's gas mileage.\n";
cout << "How many gallons of gas can your car hold?\n";
cin >> gallons; // Input number of gallons the car can hold

cout << "How many miles can your car be driven on a full tank?\n";
cin >> miles; //Input the number of miles it can be driven on a full tank

mileage = miles / gallons; 

cout << "The mileage of your car is " << mileage;// display the number of miles that may be driven per gallon of gas
return 0;
}
