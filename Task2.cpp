#include <iostream>
using namespace std;

int main()

{
	int a;
	int b;
	int i;

	cout << "Enter the number a: ";
	cin >> a;

	cout << "Enter the number b: ";
	cin >> b;

	for (i = b; i >= a; i--)
	{
		if (i % 2 != 0)
		{
			cout << i << " ";
		}
	}

	return 0;
}