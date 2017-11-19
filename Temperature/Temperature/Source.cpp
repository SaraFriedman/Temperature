#include "Celsius.h"
#include "Fahrenheit.h"
#include <iostream>
using namespace std;

void main()
{
	Celsius* cel = new Celsius(100);
	Fahrenheit* far = &((Fahrenheit)*cel);
	cout << "water boiling point: " << endl;
	cout << *far << "F" << endl;
	cout << *cel << "C" << endl;
	cel = new Celsius(0);
	far = &((Fahrenheit)*cel);
	cout << "water freezing point: " << endl;
	cout << *far << "F" << endl;
	cout << *cel << "C" << endl;
	cel = new Celsius(-273.15);
	far = &((Fahrenheit)*cel);
	cout << "absolute zero: " << endl;
	cout << *far << "F" << endl;
	cout << *cel << "C" << endl;
}