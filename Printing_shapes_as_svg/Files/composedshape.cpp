#include <iostream>
#include <fstream>
#include <cmath>
#include "composedshape.h"
#include "circle.h"
#include "rectangle.h"
#include "triangle.h"

void composedShape::setcontainerRect(ofstream *output,Rectangle & rect){
	
	double width,height;
	width=rect.getRwidth();
	height=rect.getRheight();
	
	*output<<R"(<svg version="1.1")"<<"\n"<<R"(baseProfile="full")"<<"\n"<<R"(width=")"<<width<<R"(" height=")"<<height<<R"(")"<<"\n";
	*output<<R"(xmlns="http://www.w3.org/2000/svg">)";
	*output<<R"(<rect width="100%" height="100%" fill="red" />)"<<"\n";
}

void composedShape::setcontainerTria(ofstream *output,Triangle & tria){
	
	double ax,ay,bx,by,cx,cy;
	double width,height;
	width=tria.getTriangle();
	height=tria.heightofTriangle();
	*output<<R"(<svg version="1.1")"<<"\n"<<R"(baseProfile="full")"<<"\n"<<R"(width=")"<<width<<R"(" height=")"<<height<<R"(")"<<"\n";
	*output<<R"(xmlns="http://www.w3.org/2000/svg">)";
	ax=tria.getTriangle()/2;
	ay=0;
	bx=0;
	by=tria.heightofTriangle();
	cx=tria.getTriangle();
	cy=tria.heightofTriangle();
	tria.setTriangle(width,ax,ay,bx,by,cx,cy);
	*output<<R"(<polygon points=")"<<ax<<","<<ay<<" "<<bx<<","<<by<<" "<<cx<<","<<cy;
	*output<<R"(" fill="red"/>)"<<"\n";
}
void composedShape::setcontainerCirc(ofstream *output,Circle & circ){
	
	double x,y,radius;
	double width,height;
	width=circ.getCircle()*2;
	height=circ.getCircle()*2;
	*output<<R"(<svg version="1.1")"<<"\n"<<R"(baseProfile="full")"<<"\n"<<R"(width=")"<<width<<R"(" height=")"<<height<<R"(")"<<"\n";
	*output<<R"(xmlns="http://www.w3.org/2000/svg">)";
	x=circ.getCircle();
	y=circ.getCircle();
	radius=circ.getCircle();
	circ.setCircle(radius,x,y);
	*output<<R"(<circle cx=")"<<x;
	*output<<R"(" cy=")"<<y;
	*output<<R"(" cr=")"<<radius;
	*output<<R"(" fill="red" />)"<<"\n";
}
void composedShape::finishShape(ofstream *output){
	*output<<R"(</svg>)";
}
double composedShape::area(){
	return 0;
}
double composedShape::perimeter(){
	return 0;
}
void composedShape::add_elements(Shape * newshape){
	elements.push_back(newshape);
}
void composedShape::printAll(ofstream & output){
	for(int i=(int)elements.size()-1; i>=0; i--){
		elements[i]->print(output);
		cout<<elements[i]->area()<<endl;
	}
}

std::ofstream & composedShape::print(std::ofstream & file){
	return file;
}

void composedShape::sortShapes(){
	Shape * temp;
	for(int i=0; i<(int)elements.size(); i++){
		for(int j=i; j<(int)elements.size(); j++){
			if(elements[i]->area()>elements[j]->area()){
				temp=elements[i];
				elements[i]=elements[j];
				elements[j]=temp;
			}
		}
	}
}
