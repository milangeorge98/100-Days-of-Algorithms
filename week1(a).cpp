#include <iostream>

using namespace std;

int sum_of_digits(int num1, int num2)
{
	return (num1+num2);
}

int main()
{
	int a, b;
	cin>>a>>b;
	
	cout<< sum_of_digits(a, b);
	return 0;
}
