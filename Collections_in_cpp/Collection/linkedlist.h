#include <iostream>
#include "list.h"
#include "queue.h"
#include "collection.h"

#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_

namespace berkeGTU{
	
	template<class E,class Container = std::vector<E> >
	class LinkedList: public List <E>, public Queue <E> {
	public:
		Iterator<E> iterator();
		void add(E e);
		void addAll(Collection<E> & c);
		void clear();
		bool contains(E e);
		bool containsAll(Collection<E> & c);
		bool isEmpty();
		void remove(E e);
		void removeAll(Collection<E> & c);
		void retainAll(Collection<E> & c);
		int size();
		E element();
		void offer(E e);
		void poll();
	private:
		Container list;
		Iterator<E> iter;
	};

}
#endif
