#include "../domain/providers/operators_overloaded.h"

int main()
{
	try
	{
		Point p1(12, 14);
		Point temp = ++p1;
		cout << "temp= "; temp.print();
		cout << "p1 = "; p1.print();

		Point point1;
		Point point2;
		cin >> point1;
		cin >> point2;
		cout << point1 << endl;
		cout << point2 << endl;
	}
	catch (const char* msg)
	{
		cout << msg << endl;
	}
	return 0;
}