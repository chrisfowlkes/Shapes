#include "pch.h"
#include "ShapesCli.h"
#include "ShapesLib.h"
#include <iostream>
using namespace std;
#define NORMAL_EXIT 0
#define OUTPUT_PRECISION 5

/*
Main application logic.
*/
int ShapesCli::Run()
{
	bool quit = false;

	do
	{
		cout.precision(OUTPUT_PRECISION);
		cout << "Please enter one of the following choices:\n";
		cout << "C for the area of a hollowed-out circle\n";
		cout << "T for the area of a hollowed out equilateral triangle\n";
		cout << "R for the area of a hollowed out rectangle\n";
		cout << "S for the area of a hollowed out square\n";
		cout << "P for the volume of a hollowed out sphere\n";
		cout << "Q to quit\n";
		string input;
		if (cin >> input && input.length() == 1)
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			switch (input[0])
			{
				case 'C': case 'c':
				{
					double outerRadius, innerRadius;

					cout << "Please enter the radius of the outer circle.\n";
					while (!(cin >> outerRadius))
					{
						cin.clear();
						cin.ignore(numeric_limits<streamsize>::max(), '\n');
						cout << "Invalid choice.\n";
						cout << "Please enter the radius of the outer circle.\n";
					}
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					cout << "Please enter the radius of the inner circle.\n";
					while (!(cin >> innerRadius))
					{
						cin.clear();
						cin.ignore(numeric_limits<streamsize>::max(), '\n');
						cout << "Invalid choice.\n";
						cout << "Please enter the radius of the inner circle.\n";
					}
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');

					Circle outerCircle = Circle(outerRadius);
					Circle innerCircle = Circle(innerRadius);
					HollowShape hollowCircle = HollowShape(&outerCircle, &innerCircle);
					double area = hollowCircle.Size();

					cout << "The area of the hollowed-out circle is " << area << ".\n\n";
				}
				break;
				case 'T': case 't':
				{
					double outerSide, innerSide;

					cout << "Please enter the length of a side of the outer triangle.\n";
					while (!(cin >> outerSide))
					{
						cin.clear();
						cin.ignore(numeric_limits<streamsize>::max(), '\n');
						cout << "Invalid choice.\n";
						cout << "Please enter the length of a side of the outer triangle.\n";
					}
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					cout << "Please enter the length of a side of the inner triangle.\n";
					while (!(cin >> innerSide))
					{
						cin.clear();
						cin.ignore(numeric_limits<streamsize>::max(), '\n');
						cout << "Invalid choice.\n";
						cout << "Please enter the length of a side of the inner triangle.\n";
					}
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');

					Triangle outerTriangle = Triangle(outerSide);
					Triangle innerTriangle = Triangle(innerSide);
					HollowShape hollowTriangle = HollowShape(&outerTriangle, &innerTriangle);
					double area = hollowTriangle.Size();

					cout << "The area of the hollowed-out triangle is " << area << ".\n\n";
				}
				break;
				case 'R': case 'r':
				{
					double outerLength, outerWidth, innerLength, innerWidth;

					cout << "Please enter the length of the outer rectangle.\n";
					while (!(cin >> outerLength))
					{
						cin.clear();
						cin.ignore(numeric_limits<streamsize>::max(), '\n');
						cout << "Invalid choice.\n";
						cout << "Please enter the length of the outer rectangle.\n";
					}
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					cout << "Please enter the width of the outer rectangle.\n";
					while (!(cin >> outerWidth))
					{
						cin.clear();
						cin.ignore(numeric_limits<streamsize>::max(), '\n');
						cout << "Invalid choice.\n";
						cout << "Please enter the width of the outer rectangle.\n";
					}
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					cout << "Please enter the length of the inner rectangle.\n";
					while (!(cin >> innerLength))
					{
						cin.clear();
						cin.ignore(numeric_limits<streamsize>::max(), '\n');
						cout << "Invalid choice.\n";
						cout << "Please enter the length of the inner rectangle.\n";
					}
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					cout << "Please enter the width of the inner rectangle.\n";
					while (!(cin >> innerWidth))
					{
						cin.clear();
						cin.ignore(numeric_limits<streamsize>::max(), '\n');
						cout << "Invalid choice.\n";
						cout << "Please enter the width of the inner rectangle.\n";
					}
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');

					Rectangle outerRectangle = Rectangle(outerLength, outerWidth);
					Rectangle innerRectangle = Rectangle(innerLength, innerWidth);
					HollowShape hollowRectangle = HollowShape(&outerRectangle, &innerRectangle);
					double area = hollowRectangle.Size();

					cout << "The area of the hollowed-out rectangle is " << area << ".\n\n";
				}
				break;
				case 'S': case 's':
				{
					double outerSide, innerSide;

					cout << "Please enter the length of a side of the outer square.\n";
					while (!(cin >> outerSide))
					{
						cin.clear();
						cin.ignore(numeric_limits<streamsize>::max(), '\n');
						cout << "Invalid choice.\n";
						cout << "Please enter the length of the inner square.\n";
					}
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					cout << "Please enter the length of a side of the inner square.\n";
					while (!(cin >> innerSide))
					{
						cin.clear();
						cin.ignore(numeric_limits<streamsize>::max(), '\n');
						cout << "Invalid choice.\n";
						cout << "Please enter the length of the inner square.\n";
					}
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');

					Square outerSquare = Square(outerSide);
					Square innerSquare = Square(innerSide);
					HollowShape hollowSquare = HollowShape(&outerSquare, &innerSquare);
					double area = hollowSquare.Size();

					cout << "The area of the hollowed-out square is " << area << ".\n\n";
				}
				break;
				case 'P': case 'p':
				{
					double outerRadius, innerRadius;

					cout << "Please enter the radius of the outer sphere.\n";
					while (!(cin >> outerRadius))
					{
						cin.clear();
						cin.ignore(numeric_limits<streamsize>::max(), '\n');
						cout << "Invalid choice.\n";
						cout << "Please enter the radius of the inner sphere.\n";
					}
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					cout << "Please enter the radius of the inner sphere.\n";
					while (!(cin >> innerRadius))
					{
						cin.clear();
						cin.ignore(numeric_limits<streamsize>::max(), '\n');
						cout << "Invalid choice.\n";
						cout << "Please enter the radius of the inner sphere.\n";
					}
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');

					Sphere outerSphere = Sphere(outerRadius);
					Sphere innerSphere = Sphere(innerRadius);
					HollowShape hollowSphere = HollowShape(&outerSphere, &innerSphere);
					double volume = hollowSphere.Size();

					cout << "The volume of the hollowed-out sphere is " << volume << ".\n\n";
				}
				break;
				case 'Q': case 'q':
				{
					quit = true;
				}
				break;
				default:
				{
					cout << "Invalid choice.\n\n";
				}
			}
		}
		else
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Invalid choice.\n\n";
		}
	} while (!quit);

	return NORMAL_EXIT;
}