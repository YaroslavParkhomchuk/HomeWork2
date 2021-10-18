#include <iostream>
using namespace std;

int main()

{
	int a;
	int i;
	int n;

	cout << "Enter the number: ";
	cin >> a;

	cout << "Amount of digits: ";
	cin >> n;

	for (i = n; i > 0; i--)
	{
		cout << a % int (pow(10, i)) / int (pow(10, i - 1)) << ", ";
	}

	return 0;

}
