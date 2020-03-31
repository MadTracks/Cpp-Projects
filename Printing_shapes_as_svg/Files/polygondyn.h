#include <iostream>
#include <cmath>
#include <fstream>
#include "polygon.h"

#ifndef POLYGONDYN_H_
#define POLYGONDYN_H_

class PolygonDyn : public Polygon{
public:
	PolygonDyn();
	~PolygonDyn();
	int getSize();
	Point2D & operator[](int index);
	double area();
	double perimeter();
	std::ofstream & print(std::ofstream & file);
private:
	Point2D * points;
	int size;
};

#endif
