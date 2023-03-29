#include <iostream>
using namespace std;

// Создание локальных типов данных
template<typename A, typename B>
// Создание пользовательского класса
class Pair
{
private:
    // Создание чисел для хранения полей
	A first;
	B second;
public:
    // Реализация конструктора с параметрами
	Pair(A first, B second)
    {
        this->first = first;
        this->second = second;
    };

    // Установка первого числа
	void setNum(const A& new_first) {
        first = new_first;
    }

    // Установка второго числа
    void setNum(const B& new_second) {
        second = new_second;
    }

    // Возврат первого числа
    A getFirst() const {
        return this->first;
    }

    // Возврат второго числа
    B getSecond() const {
        return this->second;
    }

    // Перегрузка потока вывода
    friend ostream& operator<<(ostream& os, Pair<A, B>& pair) {
        return os << pair.getFirst() << ":" << pair.getSecond();
    }
};