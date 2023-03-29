#include <iostream>
using namespace std;

template<typename A, typename B>
class Pair
{
private:
	A first;
	B second;
public:
	Pair(A first, B second)
    {
        this->first = first;
        this->second = second;
    };
	void setFirst(const A& new_first) {
        first = new_first;
    }

    void setSecond(const B& new_second) {
        second = new_second;
    }

    A getFirst() const {
        return this->first;
    }

    B getSecond() const {
        return this->second;
    }

    friend ostream& operator<<(ostream& os, Pair<A, B>& pair) {
        return os << pair.getFirst() << ":" << pair.getSecond();
    }
};