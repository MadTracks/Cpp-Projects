#include <iostream>
#include <cmath>
#include <fstream>
#include "shape.h"

#ifndef CIRCLE_H_
#define CIRCLE_H_

class Circle : public Shape{
public:
	Circle(double radius);
	Circle(double radius,double x,double y);
	void setCircle(double radius,double x,double y);
	double getCircle();
	double getcx();
	double getcy();
	double area();
	double perimeter();
	void setCirc(double radius);
	Circle & operator+(double number);
	Circle & operator-(double number);
	void operator++();
	Circle & operator++(int);
	void operator--();
	Circle & operator--(int);
	bool operator==(Circle & circ1);
	bool operator!=(Circle & circ1);
	friend std::ofstream & operator<<(std::ofstream & file,Circle & circ);
	std::ofstream & print(std::ofstream & file);
private:
	double cradius;
	double cx;
	double cy;
};

#endif
