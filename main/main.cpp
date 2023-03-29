#include "MyList.h"
#include "Pair.h"

int main()
{
	setlocale(LC_ALL, "ru");

    // Демонстрация класса MyList
    {
        int enter, size;

        cout << "Введите размер списка: ";
        cin >> size;
        MyList<int> Lev(size);

        for (int i = 0; i < size; i++) {
            cout << "Введите число: ";
            cin >> enter;
            Lev.appEnd(enter);
        }
    }

    // Демонстрация класса Pair
    {
        int f;
        double s;

        cout << "\nВведите первое число пары: ";
        cin >> f;
        cout << "Введите второе число пары: ";
        cin >> s;

        // Создаём пару
        Pair<int, double> para(f, s);
        cout << "\nВаша пара чисел: \n\t";

        // Показываем, как работает наша перегрузка вывода для Pair
        cout << para << endl;
    }
}