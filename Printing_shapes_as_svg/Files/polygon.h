#include <iostream>
#include <cmath>
#include <fstream>
#include "circle.h"
#include "rectangle.h"
#include "triangle.h"
#include <vector>
#include "shape.h"


#ifndef POLYGON_H_
#define POLYGON_H_

class Polygon: public Shape{
public:
	class Point2D{
	public:
		Point2D(double x,double y);
		Point2D();
		void setpx(double x);
		void setpy(double y);
		double getpx();
		double getpy();
	private:
		double px,py;
	};
};

#endif
