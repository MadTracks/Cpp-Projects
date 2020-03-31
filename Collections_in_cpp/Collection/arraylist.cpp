#include <iostream>
#include <vector>
#include "arraylist.h"
#include "list.h"
#include "collection.h"
#include "iterator.h"
#include "iterator.cpp"

using namespace berkeGTU;

template <class E,class Container>
Iterator<E> ArrayList<E,Container>::iterator(){
	return iter;
}

template <class E,class Container>
void ArrayList<E,Container>::add(E e){
	array.insert(array.end(),e);
	arrayUpdate();
}

template <class E,class Container>
void ArrayList<E,Container>::addAll(Collection<E> & c){

	Iterator<E> colleciter;
	colleciter=c.iterator();

	while(colleciter.hasNext())
	{
		array.insert(array.end(),colleciter.Iteritem());
		colleciter=colleciter.next();
		arrayUpdate();
	}
	//std::cout<<array[0]<<"\n"<<array[1]<<"\n"<<array[2]<<"\n"<<array[3]<<"\n";
}
template <class E,class Container>
void ArrayList<E,Container>::clear(){
	array.clear();
}
template <class E,class Container>
bool ArrayList<E,Container>::contains(E e){

	while(iter.hasNext())
	{
		if(e==iter.Iteritem())
		{
			return true;
		}
		iter=iter.next();
	}
	return false;
}
template <class E,class Container>
bool ArrayList<E,Container>::containsAll(Collection<E> & c){

	bool ret;
	Iterator<E> colleciter = c.iterator();
	while(colleciter.hasNext())
	{
		while(iter.hasNext()){
				if(colleciter.Iteritem()==iter.Iteritem())
				{
					ret=true;
				}
			iter=iter.next();
		}
		colleciter=colleciter.next();
	}
	return ret;
}
template <class E,class Container>
bool ArrayList<E,Container>::isEmpty(){
	return array.empty();
}
template <class E,class Container>
void ArrayList<E,Container>::remove(E e){
	while(iter.hasNext())
	{
		if(e==iter.Iteritem())
		{
			iter.remove();
		}
	}
}

template <class E,class Container>
void ArrayList<E,Container>::removeAll(Collection<E> & c){
	c.clear();
}

template <class E,class Container>
void ArrayList<E,Container>::retainAll(Collection<E> & c){

}

template <class E,class Container>
int ArrayList<E,Container>::size(){
	return (int)array.size();
}
template <class E,class Container>
void ArrayList<E,Container>::arrayUpdate(){
	Iterator<E> iterat;
	iter=iterat;
}

