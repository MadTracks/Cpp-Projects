#include <iostream>
#include <vector>
#include "hashset.h"
#include "set.h"
#include "iterator.h"
#include "collection.h"


using namespace berkeGTU;

template <class E,class Container>
Iterator<E> HashSet<E,Container>::iterator(){
	return iter;
}

template <class E,class Container>
void HashSet<E,Container>::add(E e){

	if(contains(e)==false){
		set.insert(set.end(),e);
	}
}

template <class E,class Container>
void HashSet<E,Container>::addAll(Collection<E> & c){

	Iterator<E> colleciter = c.iterator();

	while(colleciter.hasNext())
	{
		if(contains(colleciter.Iteritem())==false){
			set.insert(set.end(),colleciter.Iteritem());
		}
		colleciter=colleciter.next();
	}
}
template <class E,class Container>
void HashSet<E,Container>::clear(){
	set.clear();
}
template <class E,class Container>
bool HashSet<E,Container>::contains(E e){

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
bool HashSet<E,Container>::containsAll(Collection<E> & c){

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
bool HashSet<E,Container>::isEmpty(){
	return set.empty();
}
template <class E,class Container>
void HashSet<E,Container>::remove(E e){
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
void HashSet<E,Container>::removeAll(Collection<E> & c){
	c.clear();
}

template <class E,class Container>
void HashSet<E,Container>::retainAll(Collection<E> & c){

}

template <class E,class Container>
int HashSet<E,Container>::size(){
	return (int)set.size();
}

