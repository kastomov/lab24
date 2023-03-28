#include "iostream"
#include "list"
using namespace std;

// Создание локального типа данных
template<typename T>
class MyList {
private:
	// Создание контейнера для хранения элементов MyList
	list<T> l;
public:
	// Конструктор с параметром
	MyList(int size);
	// Оператор взятия значения по индексу
	T operator[](int index);
	// Метод возвращает размер списка
	int size();
	// Оператор добавления константы к элементу
	MyList<T> operator+(int element);
	// Вывод
	MyList<T> appEnd(int A);
};