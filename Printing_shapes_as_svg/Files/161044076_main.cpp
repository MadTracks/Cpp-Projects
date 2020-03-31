#include <iostream>
#include <fstream>
#include <cmath>
#include "circle.h"
#include "rectangle.h"
#include "triangle.h"
#include "composedshape.h"
#include "polygon.h"
#include "shape.h"
#include <vector>

using namespace std;

int main(){

	composedShape shape;
	Rectangle mainrect(500,500);
	shape.add_elements(&mainrect);
	Rectangle rect(75,60,250,250);
	shape.add_elements(&rect);
	Triangle tria(100,200,300);
	shape.add_elements(&tria);
	Circle circ(50,250,250);
	shape.add_elements(&circ);
	Circle circ2(50,400,400);
	shape.add_elements(&circ2);

	ofstream output;
	output.open("output.svg");
	shape.setcontainerRect(&output,mainrect);
	shape.sortShapes();
	shape.printAll(output);
	shape.finishShape(&output);
	output.close();

	return 0;
}
