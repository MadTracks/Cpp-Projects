#include <iostream>
#include <cmath>
#include "rectangle.h"

Rectangle::Rectangle(double height,double width){
	rheight=height;
	rwidth=width;
}

Rectangle::Rectangle(double height,double width,double x,double y){
	rheight=height;
	rwidth=width;
	rx=x;
	ry=y;
}

double Rectangle::area(){
	return rheight*rwidth;
}
double Rectangle::perimeter(){
	return 2*rheight+2*rwidth;
}

double Rectangle::getRwidth(){
	return rwidth;
}

double Rectangle::getRheight(){
	return rheight;
}

void Rectangle::setRectangle(double height,double width,double x,double y){
	rheight=height;
	rwidth=width;
	rx=x;
	ry=y;
}
void Rectangle::setRect(double height,double width){
	rheight=height;
	rwidth=width;
}
Rectangle & Rectangle::operator+(double number){
	Rectangle newrect(rheight,rwidth);
	newrect.rheight+=number;
	newrect.rwidth+=number;
	return newrect;
}
Rectangle & Rectangle::operator-(double number){
	Rectangle newrect(rheight,rwidth);
	newrect.rheight-=number;
	newrect.rwidth-=number;
	if(newrect.rheight<=0 || newrect.rwidth<=0){
		newrect=newrect+number;
	}
	return newrect;
}
void Rectangle::operator++(){
	++rx;
	++ry;
}
Rectangle & Rectangle::operator++(int){
	Rectangle oldrect(rheight,rwidth);
	oldrect.setRectangle(rheight,rwidth,rx,ry);
	++rx;
	++ry;
	return oldrect;
}
void Rectangle::operator--(){
	--rx;
	--ry;
}
Rectangle & Rectangle::operator--(int){
	Rectangle oldrect(rheight,rwidth);
	oldrect.setRectangle(rheight,rwidth,rx,ry);
	--rx;
	--ry;
	return oldrect;
}
bool Rectangle::operator==(Rectangle & rect1){
	if(rwidth==rect1.rwidth && rheight==rect1.rheight){
		return true;
	}
	return false;
}
bool Rectangle::operator!=(Rectangle & rect1){
	if(rwidth!=rect1.rwidth || rheight!=rect1.rheight){
		return true;
	}
	return false;
}
double Rectangle::getrx(){
	return rx;
}
double Rectangle::getry(){
	return ry;
}
std::ofstream & operator<<(std::ofstream & file,Rectangle & rect){
	file<<R"(<rect width=")"<<rect.rwidth<<R"(" height=")"<<rect.rheight<<R"(" x=")"<<rect.rx<<R"(" y=")"<<rect.ry<<R"(" fill="blue" />)"<<"\n";
	return file;
}

std::ofstream & Rectangle::print(std::ofstream & file){
	file<<*this;
	return file;
}
