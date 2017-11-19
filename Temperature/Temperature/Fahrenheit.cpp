#include "Fahrenheit.h"



Fahrenheit::Fahrenheit(double val)
{
	m_value = val;
}


Fahrenheit::~Fahrenheit()
{
}

double Fahrenheit::GetValue() const
{
	return m_value;
}

Fahrenheit::operator Celsius()
{
	double cel = (m_value - 32)*(5 / (double)9);
	return Celsius(cel);
}

std::ostream & operator<<(ostream & o, const Fahrenheit &far)
{
	return o << far.GetValue();
}
