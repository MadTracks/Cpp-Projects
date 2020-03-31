#include <iostream>
#include <vector>
#include "linkedlist.h"


using namespace berkeGTU;

template <class E,class Container>
Iterator<E> LinkedList<E,Container>::iterator(){
	return iter;
}

template <class E,class Container>
void LinkedList<E,Container>::add(E e){
	list.insert(list.end(),e);
}

template <class E,class Container>
void LinkedList<E,Container>::addAll(Collection<E> & c){

	Iterator<E> colleciter = c.iterator();

	while(colleciter.hasNext())
	{
		list.insert(list.end(),colleciter.Iteritem());
		colleciter=colleciter.next();
	}
}
template <class E,class Container>
void LinkedList<E,Container>::clear(){
	list.clear();
}
template <class E,class Container>
bool LinkedList<E,Container>::contains(E e){

	while(iter.hasNext())
	{
		if(e==iter.Iteritem())
		{
			return true;
		}
	}
	return false;
}
template <class E,class Container>
bool LinkedList<E,Container>::containsAll(Collection<E> & c){

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
bool LinkedList<E,Container>::isEmpty(){
	return list.empty();
}
template <class E,class Container>
void LinkedList<E,Container>::remove(E e){
	while(iter.hasNext())
	{
		if(e==iter.Iteritem())
		{
			iter.remove();
		}
		iter=iter.next();
	}
}

template <class E,class Container>
void LinkedList<E,Container>::removeAll(Collection<E> & c){
	c.clear();
}

template <class E,class Container>
void LinkedList<E,Container>::retainAll(Collection<E> & c){

}

template <class E,class Container>
int LinkedList<E,Container>::size(){
	return (int)list.size();
}

template <class E,class Container>
E LinkedList<E,Container>::element(){
	return iter.Iteritem();
}

template <class E,class Container>
void LinkedList<E,Container>::offer(E e){
	list.insert(list.end(),e);
}

template <class E,class Container>
void LinkedList<E,Container>::poll(){
	remove(iter.Iteritem());
}

