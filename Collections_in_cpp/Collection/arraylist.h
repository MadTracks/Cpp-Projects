#include <iostream>
#include <vector>
#include "list.h"
#include "collection.h"

#ifndef ARRAYLIST_H_
#define ARRAYLIST_H_

namespace berkeGTU{

	template<class E,class Container = std::vector<E> >
	class ArrayList: public List<E>{
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
		void arrayUpdate();
	private:
		Container array;
		Iterator<E> iter;
	};

}

#endif
