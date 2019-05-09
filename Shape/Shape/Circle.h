
// Circle.h - You CAN edit this file!

#pragma once

#include "Shape.h"

class Circle : public Shape
{
private:

	double m_radius;

public:

	Circle() { }
	Circle(double radius) { SetRadius(radius); }
	virtual ~Circle() { }

	virtual void SetRadius(double radius);

	virtual std::string GetType() { return "Circle"; };

	virtual double GetArea();
	virtual double GetPerimeter();


	// define additional methods here:

};
/*
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
*/