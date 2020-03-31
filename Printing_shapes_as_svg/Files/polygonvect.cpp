#include <iostream>
#include <cmath>
#include <fstream>
#include <vector>
#include "polygonvect.h"

PolygonVect::PolygonVect(){
	Polygon::Point2D point;
	point.setpx(100);
	point.setpy(150);
	vpoint.push_back(point);
}

int PolygonVect::getvectorsize(){
	return vpoint.size();
}

double PolygonVect::area(){
	return 0;
}
double PolygonVect::perimeter(){
	return 0;
}

std::ofstream & PolygonVect::print(std::ofstream & file){
	int i;
	file<<R"(<polygon points=")";
	for(i=0;i<(int)vpoint.size();i++){
		file<<vpoint[i].getpx()<<","<<vpoint[i].getpy()<<" ";
	}
	file<<R"(" fill="green"/>)"<<"\n";
	return file;
}
