#include "MyList.h"
#include "Pair.h"

int main()
{
	setlocale(LC_ALL, "ru");

    // ������������ ������ MyList
    {
        int enter, size;

        cout << "������� ������ ������: ";
        cin >> size;
        MyList<int> Lev(size);

        for (int i = 0; i < size; i++) {
            cout << "������� �����: ";
            cin >> enter;
            Lev.appEnd(enter);
        }
    }

    // ������������ ������ Pair
    {
        int f;
        double s;

        cout << "\n������� ������ ����� ����: ";
        cin >> f;
        cout << "������� ������ ����� ����: ";
        cin >> s;

        // ������ ����
        Pair<int, double> para(f, s);
        cout << "\n���� ���� �����: \n\t";

        // ����������, ��� �������� ���� ���������� ������ ��� Pair
        cout << para << endl;
    }
}