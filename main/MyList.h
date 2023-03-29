#include "iostream"
#include "list"
using namespace std;

// �������� ���������� ���� ������
template<typename T>
class MyList {
private:
	// �������� ���������� ��� �������� ��������� MyList
	list<T> l;
public:
	// ����������� � ����������
	explicit MyList(int size)
    {
        l = std::list<T>(size);
    };
	// �������� ������ �������� �� �������
	T operator[](int index)
    {
        auto it = l.begin();
        std::advance(it, index);
        return *it;
    };
	// ����� ���������� ������ ������
	int size()
    {
        return l.size();
    };
	// �������� ���������� ��������� � ��������
	MyList<T> operator+(T element)
    {
        for (T n : l) {
            n += element;
        }
        return *this;
    };
	// �����
	MyList<T> appEnd(T A)
    {
        l.push_back(A);
        return *this;
    };
};