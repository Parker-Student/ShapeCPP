
// Circle.cpp - You CAN edit this file!

#include "Circle.h"

namespace { const double PI = 3.14159265358979323846; } // Use this to aproximate Pi

void Circle::SetRadius(double radius)
{
	if (radius >= 0)
	{
		m_radius = radius;
	}
}

// declare additional methods here:


double Circle::GetArea()
{
	//double A = GetPerimeter() / 2;
	return (PI * m_radius * m_radius);
}


double Circle::GetPerimeter()
{
	return (2 * PI * m_radius);
}
