#include "MyList.h"

// Реализация конструктора для создания списка размером size
template<typename T>
MyList<T>::MyList(int size) {
	l = std::list<int>(size);
}

// Реализация оператора взятия значения по индексу
template<typename T>
T MyList<T>::operator[](int index) {

	auto it = l.begin();
	std::advance(it, index);
	return *it;
}

// Реализация метода возврата размера списка
template<typename T>
int MyList<T>::size() {
	return l.size();
}

// Реализация добавления константы к элементу
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
