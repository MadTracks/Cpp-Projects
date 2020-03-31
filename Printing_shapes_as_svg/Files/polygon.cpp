#include <iostream>
#include <cmath>
#include "polygon.h"
#include <vector>
#include <fstream>

Polygon::Point2D::Point2D(double x,double y){
	px=x;
	py=y;
}

Polygon::Point2D::Point2D(){
	px=1;
	py=1;
}

void Polygon::Point2D::setpx(double x){
	px=x;
}

void Polygon::Point2D::setpy(double y){
	py=y;
}

double Polygon::Point2D::getpx(){
	return px;
}
double Polygon::Point2D::getpy(){
	return py;
}
