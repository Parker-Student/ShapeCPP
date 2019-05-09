
// Circle.h - DO NOT EDIT THIS FILE!

#pragma once

#include "Shape.h"

class Triangle : public Shape
{
private:

	double m_sideA;
	double m_sideB;
	double m_sideC;

public:

	Triangle() { }
	Triangle(double sideA, double sideB, double sideC);

	virtual void SetSideA(double size);
	virtual void SetSideB(double size);
	virtual void SetSideC(double size);

	virtual std::string GetType() { return "Triangle"; }

	virtual double GetArea();

	virtual double GetPerimeter();

};