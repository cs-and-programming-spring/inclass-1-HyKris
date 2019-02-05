


/***********************************************
* Name: Kristen Hy
* Email: hykris35@students.rowan.edu
***********************************************
* Purpose:
*  This program calculates area of circle
***********************************************/

#include <iostream>

using namespace std;

const  float PI = 3.14159;

int main()
{

	float radius, circumference, kilometers, miles, meters, centimeters, millimeters, fahrenheit, celsius, years, months, days, hours, minutes, seconds;

	//Display purpose of the program - this will be to convert miles into kilometers
	cout << " This program takes in miles to compute it in kilometers" << endl;

	//Get user input
	cout << "Please input distance in miles: ";
	cin >> miles;

	//Compute kilometers to be 1.6*miles
	kilometers = 1.6 * miles;

	//Display the kilometers
	cout << " The distance in kilometers is = " << kilometers << "\n\n";

	/*********************************************************************************************/

	//Display purpose of the program - this will be to find the circumference of a circle
	cout << " This program takes in radius to compute circumference of a circle" << endl;

	//Get user input
	cout << "Please input radius: ";
	cin >> radius;

	//Compute circumference to 2*PI*radius
	circumference = PI * radius * 2;

	//Display the circumference
	cout << " The circumference is = " << circumference << "\n\n";
	
	/********************************************************************************************/

	//Display purpose of the program - this will be to display given distance in different measurements
	cout << " This program takes in the kilometers of the first program and converts it into other measurements " << endl;


	//Compute the different measurements
	meters = kilometers * 1000;
	centimeters = meters * 100;
	millimeters = meters * 1000;

	//Display the measurements
	cout << " The distance in meters is = " << meters << endl;
	cout << " The distance in centimeters is = " << centimeters << endl;
	cout << " The distance millimeters is = " << millimeters << "\n\n";
	
	/********************************************************************************************/

	//Display purpose of the program - this will be to find degrees in Fahrenheit from Celsius
	cout << " This program takes in Fehrenheit to compute Celsius" << endl;

	//Get user input
	cout << "Please input temperature in Fahrenheit: ";
	cin >> fahrenheit;

	//Compute Celsius = Fahrenheit - 32 / (9/5)
	celsius = (fahrenheit - 32) * (5 / 9);

	//Display the temperature
	cout << " The degrees in Celsius is = " << celsius << "\n\n";

	/********************************************************************************************/

	//Display purpose of the program - this will be to find a person's years into months,days,hours,minutes and seconds
	cout << " This program takes years to convert into months, days, hours, minutes and seconds" << endl;

	//Get user input
	cout << "Please input year: ";
	cin >> years;

	//Compute 
	months = years * 12;
	days = years * 365.25;
	hours = years * 8766;
	minutes = years * 525960;
	seconds = years * 31557600;

	//Display the computations
	cout << " The time in months is = " << months << "\n\n";
	cout << " The time in days is = " << days << "\n\n";
	cout << " The time in hours is = " << hours << "\n\n";
	cout << " The time in minutes is = " << minutes << "\n\n";
	cout << " The time in seconds is = " << seconds << "\n\n";
	
	//Display purpose of the program - this will be to find a person's years into months,days,hours,minutes and seconds
	cout << " This program shows to first initial of my name" << endl;

	cout << "*       *" << "\n\n";
	cout << "*    *" << "\n\n";
	cout << "*  *" << "\n\n";
	cout << "*  *" << "\n\n";
	cout << "*    *" << "\n\n";
	cout << "*       *" << "\n\n";

	system("pause");
	return 0;
}