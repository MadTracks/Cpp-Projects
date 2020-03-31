#include <iostream>
#include <cmath>
#include <fstream>

#ifndef SHAPE_H_
#define SHAPE_H_

class Shape{
public:
	virtual double area() = 0;
	virtual double perimeter() = 0;
	void operator++();
    Shape & operator++(int);
	void operator--();
    Shape & operator--(int);
	bool operator==(Shape & par);
	bool operator!=(Shape & par);
	virtual std::ofstream & print(std::ofstream & file)=0;
};

#endif
