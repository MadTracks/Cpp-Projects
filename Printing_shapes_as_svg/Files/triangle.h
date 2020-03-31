#include <iostream>
#include <cmath>
#include <fstream>
#include "shape.h"


#ifndef TRIANGLE_H_
#define TRIANGLE_H_

class Triangle: public Shape{
public:
	Triangle(double side);
	Triangle(double side,double x,double y);
	void setTriangle(double side,double a1x,double a1y,double a2x,double a2y,double a3x,double a3y);
	double getTriangle();
	double getax();
	double getay();
	double getbx();
	double getby();
	double getcx();
	double getcy();
	double heightofTriangle();
	double area();
	double perimeter();
	void setTria(double side);
	Triangle & operator+(double number);
	Triangle & operator-(double number);
	void operator++();
	Triangle & operator++(int);
	void operator--();
	Triangle & operator--(int);
	bool operator==(Triangle & tria1);
	bool operator!=(Triangle & tria1);
	friend std::ofstream & operator<<(std::ofstream & file,Triangle & tria);
	std::ofstream & print(std::ofstream & file);
private:
	double tside,theight;
	double ax,ay,bx,by,cx,cy;
};

#endif
