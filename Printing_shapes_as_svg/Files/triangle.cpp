#include <iostream>
#include <cmath>
#include "triangle.h"

Triangle::Triangle(double side){
	tside=side;
}

Triangle::Triangle(double side,double x,double y){
	tside=side;
	ax=x;
	ay=y;
	bx=x-side/2;
	by=y+heightofTriangle();
	cx=x+side/2;
	cy=y+heightofTriangle();
}

double Triangle::heightofTriangle(){
	return tside*sqrt(3)/2.0;
}

double Triangle::area(){
	return tside*tside*sqrt(3)/4.0;
}
double Triangle::perimeter(){
	return 3*tside;
}

double Triangle::getTriangle(){
	return tside;
}

void Triangle::setTriangle(double side,double a1x,double a1y,double a2x,double a2y,double a3x,double a3y){
	tside=side;
	ax=a1x;
	ay=a1y;
	bx=a2x;
	by=a2y;
	cx=a3x;
	cy=a3y;
}
void Triangle::setTria(double side){
	tside=side;
}
Triangle & Triangle::operator+(double number){
	Triangle newtria(tside);
	newtria.tside+=number;
	newtria.theight=newtria.heightofTriangle();
	return newtria;
}
Triangle & Triangle::operator-(double number){
	Triangle newtria(tside);
	newtria.tside-=number;
	newtria.theight=newtria.heightofTriangle();
	if(newtria.tside<=0){
		newtria=newtria+number;
		newtria.theight=newtria.heightofTriangle();
	}
	return newtria;
}
void Triangle::operator++(){
	++ax;
	++ay;
	++bx;
	++by;
	++cx;
	++cy;
}
Triangle & Triangle::operator++(int){
	Triangle oldtria(tside);
	oldtria.setTriangle(tside,ax,ay,bx,by,cx,cy);
	++ax;
	++ay;
	++bx;
	++by;
	++cx;
	++cy;
	return oldtria;
}
void Triangle::operator--(){
	--ax;
	--ay;
	--bx;
	--by;
	--cx;
	--cy;
}
Triangle & Triangle::operator--(int){
	Triangle oldtria(tside);
	oldtria.setTriangle(tside,ax,ay,bx,by,cx,cy);
	--ax;
	--ay;
	--bx;
	--by;
	--cx;
	--cy;
	return oldtria;
}
bool Triangle::operator==(Triangle & tria1){
	if(tside==tria1.tside){
		return true;
	}
	return false;
}
bool Triangle::operator!=(Triangle & tria1){
	if(tside!=tria1.tside){
		return true;
	}
	return false;
}
double Triangle::getax(){
	return ax;
}
double Triangle::getay(){
	return ay;
}
double Triangle::getbx(){
	return bx;
}
double Triangle::getby(){
	return by;
}
double Triangle::getcx(){
	return cx;
}
double Triangle::getcy(){
	return cy;
}
std::ofstream & operator<<(std::ofstream & file,Triangle & tria){
	file<<R"(<polygon points=")"<<tria.ax<<","<<tria.ay<<" "<<tria.bx<<","<<tria.by<<" "<<tria.cx<<","<<tria.cy<<R"(" fill="purple"/>)"<<"\n";
	return file;
}

std::ofstream & Triangle::print(std::ofstream & file){
	file<<*this;
	return file;
}
