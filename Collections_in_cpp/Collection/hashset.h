#include <iostream>
#include "set.h"
#include "collection.h"

#ifndef HASHSET_H_
#define HASHSET_H_

namespace berkeGTU{

	template<class E,class Container = std::vector<E> >
	class HashSet: public Set<E>{
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
	private:
		Container set;
		Iterator<E> iter;
	};
	
}
#endif
