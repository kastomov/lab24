#include "MyList.h"
#include "Pair.h"

int main()
{
	setlocale(LC_ALL, "ru");
	int enter, size;

	cout << "������� ������ ������: ";
	cin >> size;
	MyList<int> Lev(size);

	for (int i = 0; i < size; i++)
	{
		cout << "������� �����: ";
		cin >> enter;
		Lev.appEnd(enter);
	}
}