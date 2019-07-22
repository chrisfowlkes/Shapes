#pragma once

/*
Base class for all shapes.
*/
class Shape
{
public:
	/*
	Virtual function that will calculate the area of two dimensional
	shapes or the volume of three dimensional shapes.
	*/
	virtual double Size() = 0;
};

/*
Represents a circle.
*/
class Circle: public Shape
{
private:
	/*
	Radius of the circle.
	*/
	double radius;
public:
	/*
	Constructor.
	*/
	Circle(double radius);
	/*
	Calculates the area of the circle.
	*/
	double Size();
};

/*
Represents an equilateral triangle.
*/
class Triangle: public Shape
{
private:
	/*
	The length of the sides of the triangle.
	*/
	double side;
public:
	/*
	Constructor.
	*/
	Triangle(double side);
	/*
	Calculates the area of the triangle.
	*/
	double Size();
};

/*
Represents a rectangle.
*/
class Rectangle : public Shape
{
private:
	/*
	The length of the rectangle.
	*/
	double length;
	/*
	The width of the rectangle.
	*/
	double width;
public:
	/*
	Constructor.
	*/
	Rectangle(double length, double width);
	/*
	Calculates the area of the rectangle.
	*/
	double Size();
};

/*
Represents a square.
*/
class Square : public Rectangle
{
public:
	/*
	Constructor that takes the length of the sides as a parameter.
	*/
	Square(double side);
};

/*
Represents a sphere.
*/
class Sphere : public Shape
{
private:
	/*
	The radius of the sphere.
	*/
	double radius;
public:
	/*
	Constructor.
	*/
	Sphere(double radius);
	/*
	Calculates the volume of the sphere.
	*/
	double Size();
};

/*
Represents a hollow shape.
*/
class HollowShape : public Shape
{
private:
	/*
	The outer shape of the hollow shape.
	*/
	Shape* outerShape;
	/*
	The inner shape of the hollow shape.
	*/
	Shape* innerShape;
public:
	/*
	Constructor for a hollow circle.
	*/
	HollowShape(Circle* outerCircle, Circle* innerCircle);
	/*
	Constructor for a hollow triangle.
	*/
	HollowShape(Triangle* outerTriangle, Triangle* innerTriangle);
	/*
	Constructor for a hollow rectangle.
	*/
	HollowShape(Rectangle* outerRectangle, Rectangle* innerRectangle);
	/*
	Constructor for a hollow sphere.
	*/
	HollowShape(Sphere* outerSphere, Sphere* innerSphere);
	/*
	Calculates the area of hollow two dimensional shapes and the volume of hollow three
	dimensional shapes.
	*/
	double Size();
};
