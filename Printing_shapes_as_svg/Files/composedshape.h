#include <iostream>
#include <cmath>
#include <fstream>
#include <vector>
#include "circle.h"
#include "rectangle.h"
#include "triangle.h"
#include "shape.h"

#ifndef COMPOSEDSHAPE_H_
#define COMPOSEDSHAPE_H_

using namespace std;

class composedShape : public Shape{
public:
	void setcontainerRect(ofstream *output,Rectangle & rect);
	void setcontainerTria(ofstream *output,Triangle & tria);
	void setcontainerCirc(ofstream *output,Circle & circ);
	void finishShape(ofstream *output);
	double area();
	double perimeter();
	void add_elements(Shape * newshape);
	void printAll(ofstream & output);
	std::ofstream & print(std::ofstream & file);
	void sortShapes();
private:
	vector<Shape *> elements;
};

#endif
