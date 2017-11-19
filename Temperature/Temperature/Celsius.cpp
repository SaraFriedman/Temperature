#include "Celsius.h"

#include "Fahrenheit.h"

Celsius::Celsius(double val)
{
	m_value = val;
}


Celsius::~Celsius()
{
}

double Celsius::GetValue() const
{
	return m_value;
}

Celsius::operator Fahrenheit()
{
	double far = m_value*(9 / (double)5) + 32;
	return Fahrenheit(far);
}


std::ostream & operator<<(ostream & o, const Celsius & cel)
{
	return o << cel.GetValue();
}
