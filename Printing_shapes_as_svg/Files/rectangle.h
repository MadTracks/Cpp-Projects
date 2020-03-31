#include <iostream>
#include <cmath>
#include <fstream>
#include "shape.h"


#ifndef RECTANGLE_H_
#define RECTANGLE_H_


class Rectangle: public Shape{
public:
	Rectangle(double height,double width);
	Rectangle(double height,double width,double x,double y);
	void setRectangle(double height,double width,double x,double y);
	double getRheight();
	double getRwidth();
	double getrx();
	double getry();
	double area();
	double perimeter();
	void setRect(double height,double width);
	Rectangle & operator+(double number);
	Rectangle & operator-(double number);
	void operator++();
	Rectangle & operator++(int);
	void operator--();
	Rectangle & operator--(int);
	bool operator==(Rectangle & rect1);
	bool operator!=(Rectangle & rect1);
	friend std::ofstream & operator<<(std::ofstream & file,Rectangle & rect);
	std::ofstream & print(std::ofstream & file);
private:
	double rheight;
	double rwidth;
	double rx,ry;
};

#endif
