
test : composedshape.o 161044076_main.o circle.o triangle.o rectangle.o polygon.o shape.o polygondyn.o polygonvect.o
	g++ -o test circle.o composedshape.o rectangle.o triangle.o 161044076_main.o polygon.o shape.o polygondyn.o polygonvect.o
composedshape.o : composedshape.cpp
	g++ -c -std=c++11 -Wall composedshape.cpp
circle.o : circle.cpp
	g++ -c -std=c++11 -Wall circle.cpp
triangle.o : triangle.cpp
	g++ -c -std=c++11 -Wall triangle.cpp
rectangle.o : rectangle.cpp
	g++ -c -std=c++11 -Wall rectangle.cpp
polygon.o : polygon.cpp
	g++ -c -std=c++11 -Wall polygon.cpp
161044076_main.o : 161044076_main.cpp
	g++ -c -std=c++11 -Wall 161044076_main.cpp
shape.o: shape.cpp
	g++ -c -std=c++11 -Wall shape.cpp
polygondyn.o : polygondyn.cpp
	g++ -c -std=c++11 -Wall polygondyn.cpp
polygonvect.o : polygonvect.cpp
	g++ -c -std=c++11 -Wall polygonvect.cpp
clean:
	rm *.o test
