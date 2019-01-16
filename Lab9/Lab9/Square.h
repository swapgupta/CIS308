#include "Shape.h"

typedef struct _Square
{
	Shape* shapeBaseObj;
	double length;
} Square;

Shape* New_Square(double);

double getSquareArea(Shape*);

double getSquarePerimeter(Shape*);