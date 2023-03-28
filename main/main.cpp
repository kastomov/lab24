#include "MyList.h"
#include "Pair.h"

int main()
{
	setlocale(LC_ALL, "ru");
	int enter, size;

	cout << "¬ведите размер списка: ";
	cin >> size;
	MyList<int> Lev(size);

	for (int i = 0; i < size; i++)
	{
		cout << "¬ведите число: ";
		cin >> enter;
		Lev.appEnd(enter);
	}
}