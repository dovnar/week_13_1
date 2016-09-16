#include <iostream>

using namespace std;

void exponentiation(int number, int extent, int* result);

int main()
{
	int number;
	int extent;
	int result = 1;
	int* pResult = &result;
	cout << "eyter number: ";
	cin >> number;
	cout << "enter extent: ";
	cin >> extent;
	exponentiation(number, extent, pResult);
	cout << number << " exponentiation " << extent << " = " << *pResult << endl;
}

void exponentiation(int number, int extent, int * result)
{
	for (int i = 0; i < extent; i++)
	{
		*result *= number;
	}
}
