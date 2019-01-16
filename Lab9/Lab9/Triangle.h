#include "Shape.h"

typedef struct _Triangle
{
	Shape* shapeBaseObj;

	double base;
	double height;

	double side1;
	double side2;
} Triangle;

Shape* New_Triangle(double, double, double, double);

double getTriangleArea(Shape*);

double getTrianglePerimeter(Shape*);