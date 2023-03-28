#include "MyList.h"

// ���������� ������������ ��� �������� ������ �������� size
template<typename T>
MyList<T>::MyList(int size) {
	l = std::list<int>(size);
}

// ���������� ��������� ������ �������� �� �������
template<typename T>
T MyList<T>::operator[](int index) {

	auto it = l.begin();
	std::advance(it, index);
	return *it;
}

// ���������� ������ �������� ������� ������
template<typename T>
int MyList<T>::size() {
	return l.size();
}

// ���������� ���������� ��������� � ��������
template<typename T>
MyList<T> MyList<T>::operator+(int element) {
	for (T n : l) {
		n += element;
	}
}

template<typename T>
MyList<T> MyList<T>::appEnd(int A)
{
	l.push_back(A);
}
