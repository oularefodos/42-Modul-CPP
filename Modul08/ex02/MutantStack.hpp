#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string>
# include <stack>
# include <deque>

template <typename T>
class MutantStack : public std::stack<T>
{

	public:
		typedef typename std::stack<T>::container_type::iterator iterator;
		MutantStack() {};
		MutantStack( MutantStack const & src )
		{
			this->c = src.c;
		}
		~MutantStack() {
			this->c.clear();
		};
		MutantStack& operator=( MutantStack const & rhs )
		{
			this->c = rhs.c;
			return *this;
		}
		iterator begin() {
			return this->c.begin();
		}
		iterator end() {
			return this->c.end();
		}
};

#endif