#include <iostream>
#include "collection.h"

#ifndef QUEUE_H_
#define QUEUE_H_

namespace berkeGTU{

	template<class E,class Container = std::vector<E> >
	class Queue: public Collection<E>{
	public:
		virtual void add(E e) = 0;
		virtual E element() = 0;
		virtual void offer(E e) = 0;
		virtual void poll() = 0;
	};

}
#endif
