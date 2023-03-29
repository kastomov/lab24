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
	explicit MyList(int size)
    {
        l = std::list<T>(size);
    };
	// Оператор взятия значения по индексу
	T operator[](int index)
    {
        auto it = l.begin();
        std::advance(it, index);
        return *it;
    };
	// Метод возвращает размер списка
	int size()
    {
        return l.size();
    };
	// Оператор добавления константы к элементу
	MyList<T> operator+(T element)
    {
        for (T n : l) {
            n += element;
        }
        return *this;
    };
	// Вывод
	MyList<T> appEnd(T A)
    {
        l.push_back(A);
        return *this;
    };
};