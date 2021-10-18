#include <iostream>
using namespace std;

int main()

{
	int a;
	int result;

	cout << "Enter the number: ";
	cin >> a;
	
	cout << "Result: " << a / 10 % 100 << endl;

	return 0;
}

