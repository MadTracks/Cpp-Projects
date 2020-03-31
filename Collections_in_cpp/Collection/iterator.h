#include <iostream>

#ifndef ITERATOR_H_
#define ITERATOR_H_

namespace berkeGTU{

	template<class E,class Container = std::vector<E> >
	class Iterator{
	public:
		Iterator();
		Iterator(Container contain);
		bool hasNext();
		Iterator<E> & next();
		void remove();
		void newend();
		E Iteritem();

	private:
		Container cont;
		typename Container::iterator iterbegin;
		typename Container::iterator iterend;
	};

}
#endif
