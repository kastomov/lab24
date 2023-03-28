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
	MyList(int size);
	// �������� ������ �������� �� �������
	T operator[](int index);
	// ����� ���������� ������ ������
	int size();
	// �������� ���������� ��������� � ��������
	MyList<T> operator+(int element);
	// �����
	MyList<T> appEnd(int A);
};