#include <iostream>
#include <vector>
#include "iterator.h"

using namespace berkeGTU;

template<class E,class Container>
Iterator<E,Container>::Iterator(){
	iterbegin=cont.begin();
	iterend=cont.end();
}
template<class E,class Container>
Iterator<E,Container>::Iterator(Container contain){
	iterbegin=contain.begin();
	iterend=contain.end();
}
template<class E,class Container>
bool Iterator<E,Container>::hasNext(){

	if(iterbegin==iterend)
	{
		return false;
	}
	return true;
}

template<class E,class Container>
Iterator<E> & Iterator<E,Container>::next(){
	iterbegin++;
	return *this;
}

template<class E,class Container>
void Iterator<E,Container>::remove(){
	cont.erase(iterbegin);
}

template<class E,class Container>
void Iterator<E,Container>::newend(){
	iterend=cont.end();
}

template<class E,class Container>
E Iterator<E,Container>::Iteritem(){
	return *iterbegin;
}
