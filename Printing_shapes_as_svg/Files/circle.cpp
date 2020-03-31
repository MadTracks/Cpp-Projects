#include <iostream>
#include <cmath>
#include "circle.h"

Circle::Circle(double radius){
	cradius=radius;
}

Circle::Circle(double radius,double x,double y){
	cradius=radius;
	cx=x;
	cy=y;
}

double Circle::area(){
	return M_PI*cradius*cradius;
}

double Circle::perimeter(){
	return 2.0*cradius*M_PI;
}

double Circle::getCircle(){
	return cradius;
}

double Circle::getcx(){
	return cx;
}
double Circle::getcy(){
	return cy;
}
void Circle::setCircle(double radius,double x,double y){
	cradius=radius;
	cx=x;
	cy=y;
}
void Circle::setCirc(double radius)
{
	cradius=radius;
}
Circle & Circle::operator+(double number){
	cradius+=number;
	return *this;
}

Circle & Circle::operator-(double number){
	cradius-=number;
	if(cradius<=0){
		cradius=0;
	}
	return *this;
}

void Circle::operator++(){
	++cx;
	++cy;
}

Circle & Circle::operator++(int){
	Circle oldCirc(cradius);
	oldCirc.setCircle(cradius,cx,cy);
	++cx;
	++cy;
	return oldCirc;
}

void Circle::operator--(){
	--cx;
	--cy;
}

Circle & Circle::operator--(int){
	Circle oldCirc(cradius);
	oldCirc.setCircle(cradius,cx,cy);
	--cx;
	--cy;
	return oldCirc;
}

bool Circle::operator==(Circle & circ1){
	if(this->area()==circ1.area()){
		return true;
	}
	return false;
}

bool Circle::operator!=(Circle & circ1){
	if(this->area()!=circ1.area()){
		return true;
	}
	return false;
}
std::ofstream & operator<<(std::ofstream & file,Circle & circ){
	file<<R"(<circle cx=")"<<circ.cx<<R"(" cy=")"<<circ.cy<<R"(" r=")"<<circ.cradius<<R"(" fill="yellow" />)"<<"\n";
	return file;
}

std::ofstream & Circle::print(std::ofstream & file){
	file<<*this;
	return file;
}
