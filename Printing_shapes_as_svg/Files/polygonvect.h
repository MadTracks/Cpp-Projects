#include <iostream>
#include <cmath>
#include <fstream>
#include "polygon.h"
#include <vector>

#ifndef POLYGONVECT_H_
#define POLYGONVECT_H_

class PolygonVect: public Polygon{
public:
	PolygonVect();
	int getvectorsize();
	double area();
	double perimeter();
	std::ofstream & print(std::ofstream & file);
private:
	std::vector<Polygon::Point2D> vpoint;
};

#endif
