
test : 161044076_main.o linkedlist.o arraylist.o hashset.o iterator.o
	g++ -o test 161044076_main.o linkedlist.o arraylist.o hashset.o iterator.o
161044076_main.o : 161044076_main.cpp
	g++ -c -std=c++11 -Wall 161044076_main.cpp
linkedlist.o: linkedlist.cpp
	g++ -c -std=c++11 -Wall linkedlist.cpp
arraylist.o : arraylist.cpp
	g++ -c -std=c++11 -Wall arraylist.cpp
hashset.o : hashset.cpp
	g++ -c -std=c++11 -Wall hashset.cpp
iterator.o : iterator.cpp
	g++ -c -std=c++11 -Wall iterator.cpp
clean:
	rm *.o test
