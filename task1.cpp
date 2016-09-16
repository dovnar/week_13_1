#include <iostream>

using namespace std;
void factor(int number, int* result);
int main()
{
	int number;
	int result{ 1 };
	int* pResult = &result;
	cout << "factorial number?\n enter number: ";
	cin >> number;
	
	factor(number, pResult);
	cout << "factorial " << number << " = " << *pResult << endl;
}

void factor(int number, int* result)
{
	if (number > 0)
	{
		*result *= number;
		factor(number-1, result);
	}

}
