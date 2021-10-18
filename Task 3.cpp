#include <iostream>
using namespace std;

int main()

{
	float a;
	float i;
	float sum = 0;
	int n;

	cout << "Enter the number n: ";
	cin >> n;

	for (i = 1; i <= n; i++)
	{
		a = 1 / (i * (i + 1));
		sum += a;
	}

	cout << "The sum is: " << sum << endl;

	return 0;
}
