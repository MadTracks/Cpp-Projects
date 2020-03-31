#include <iostream>
#include <cmath>
#include <fstream>
#include "polygondyn.h"


int PolygonDyn::getSize(){
	return size;
}

PolygonDyn::~PolygonDyn(){
	delete[]points;
}


PolygonDyn::PolygonDyn(){
	size=1;
	points=new Point2D[size];
	points[0].setpx(4);
	points[0].setpy(5);

}

Polygon::Point2D & PolygonDyn::operator[](int index){
	return points[index];
}

double PolygonDyn::area(){
	return 0;
}
double PolygonDyn::perimeter(){
	return 0;
}

std::ofstream & PolygonDyn::print(std::ofstream & file){
	int i;
	file<<R"(<polygon points=")";
	for(i=0;i<size;i++){
		file<<points[i].getpx()<<","<<points[i].getpy()<<" ";
	}
	file<<R"(" fill="green"/>)"<<"\n";
	return file;
}
