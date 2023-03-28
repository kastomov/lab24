#include <iostream>
using namespace std;

template<typename A, typename B>
class Pair
{
private:
	A first;
	B second;
public:
	Pair(A, B);
	void setFirst(A);
	void setSecond(B);
	A getFirst() const;
	B getSecond() const;
	friend ostream& operator<<(ostream&, Pair<A, B>);
};

template<typename A, typename B>
inline Pair<A, B>::Pair(A first, B second)
{
	this->first = first;
	this->second = second;
}

template<typename A, typename B>
inline void Pair<A, B>::setFirst(A numFirst)
{
	first = numFirst;
}

template<typename A, typename B>
inline void Pair<A, B>::setSecond(B numSecond)
{
	second = numSecond;
}

template<typename A, typename B>
inline A Pair<A, B>::getFirst() const
{
	return first;
}

template<typename A, typename B>
inline B Pair<A, B>::getSecond() const
{
	return second;
}

template <typename A, typename B>
ostream& operator<<(ostream& os, Pair<A, B> pair)
{
	return os << pair.getFirst() << ":" << pair.getSecond();
}