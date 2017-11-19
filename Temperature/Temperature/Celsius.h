class Fahrenheit;
using namespace std;
#include <iostream>
#pragma once

class Celsius
{
private:
	double m_value;
public:
	Celsius(double val);
	~Celsius();
	double GetValue() const;
	operator Fahrenheit();	
};
ostream & operator<<(ostream & o, const Celsius & cel);