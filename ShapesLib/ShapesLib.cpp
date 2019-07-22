// ShapesLib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "ShapesLib.h"
#include "Math.h"
#define PI 3.141592f

/*
Constructor.
*/
Circle::Circle(double radius)
{
	this->radius = radius;
}

/*
Calculates the area of the circle.
*/
double Circle::Size()
{
	double area;
	area = (radius * radius * PI);
	return area;
}

/*
Constructor.
*/
Triangle::Triangle(double side)
{
	this->side = side;
}

/*
Calculates the area of the triangle.
*/
double Triangle::Size()
{
	double area;
	area = (side * side * sqrt(3) / 4);
	return area;
}

/*
Constructor.
*/
Rectangle::Rectangle(double length, double width)
{
	this->length = length;
	this->width = width;
}

/*
Calculates the area of the rectangle.
*/
double Rectangle::Size()
{
	double area;
	area = length * width;
	return area;
}

/*
Constructor.
*/
Square::Square(double side) : Rectangle(side, side)
{
}

/*
Constructor.
*/
Sphere::Sphere(double radius)
{
	this->radius = radius;
}

/*
Calculates the volume of the sphere.
*/
double Sphere::Size()
{
	double volume;
	volume = 4 * (double)PI * pow(radius, 3) / 3;
	return volume;
}

/*
Constructor for a hollow circle.
*/
HollowShape::HollowShape(Circle* outerCircle, Circle* innerCircle)
{
	this->outerShape = outerCircle;
	this->innerShape = innerCircle;
}

/*
Constructor for a hollow triangle.
*/
HollowShape::HollowShape(Triangle *outerTriangle, Triangle *innerTriangle)
{
	this->outerShape = outerTriangle;
	this->innerShape = innerTriangle;
}

/*
Constructor for a hollow rectangle.
*/
HollowShape::HollowShape(Rectangle* outerRectangle, Rectangle* innerRectangle)
{
	this->outerShape = outerRectangle;
	this->innerShape = innerRectangle;
}

/*
Constructor for a hollow sphere.
*/
HollowShape::HollowShape(Sphere* outerSphere, Sphere* innerSphere)
{
	this->outerShape = outerSphere;
	this->innerShape = innerSphere;
}

/*
Calculates the area of a two dimensional hollow shape and the volumne for a 
three dimensional hollow shape.
*/
double HollowShape::Size()
{
	double area;
	area = outerShape->Size() - innerShape->Size();
	return area;
}
