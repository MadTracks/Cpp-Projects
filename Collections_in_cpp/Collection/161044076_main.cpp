#include <iostream>
#include <vector>
#include "collection.h"
#include "set.h"
#include "list.h"
#include "queue.h"
#include "arraylist.h"
#include "hashset.h"
#include "linkedlist.h"
#include "hashset.cpp"
#include "arraylist.cpp"
#include "linkedlist.cpp"
#include <set>
#include <list>

using namespace berkeGTU;

int main(){

	bool empty1;
	bool contains1;
	bool contains2;

	ArrayList<int,std::vector<int> > a;
	HashSet<int,std::set<int> > b;
	LinkedList<int,std::list<int> > c;
	int size1,size2,size3;

	a.add(1245);
	a.clear();
	a.add(24);
	a.add(135);
	a.add(42);
	b.add(24);
	b.add(45);
	b.add(24);
	c.add(34);
	c.add(32523);
	c.add(2424);
	c.add(1412341);
	//a.addAll(b);
	size1=a.size();
	size2=b.size();
	size3=c.size();
	empty1=a.isEmpty();
	contains1=a.contains(24);
	contains2=b.contains(24);

	std::cout<<size1<<" "<<size2<<" "<<size3<<std::endl;
	if(empty1 == false)
		std::cout<<"1"<<std::endl;
	if(contains1 == false)
			std::cout<<"2"<<std::endl;
	if(contains2 == false)
			std::cout<<"3"<<std::endl;


	return 0;
}
