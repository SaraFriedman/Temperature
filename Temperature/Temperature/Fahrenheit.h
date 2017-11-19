#include "Celsius.h"
using namespace std;
#include <iostream>
#pragma once
class Fahrenheit
{
private:
	double m_value;
public:
	Fahrenheit(double val);
	~Fahrenheit();
	double GetValue() const;
	operator Celsius();
};
ostream & operator<<(ostream & o, const Fahrenheit &far);