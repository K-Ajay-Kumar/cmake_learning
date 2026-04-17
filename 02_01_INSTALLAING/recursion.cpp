#include<iostream>
using namespace std;
int recursion(int value);

int recursion(int value)
{
	if (value > 1)
	{
		return value * recursion(value -1);
	}
	else
	{
		return 1;
	}
}

int main()
{
	int input = 5;
	int result = recursion(input);
	cout<<result<<endl;
	return 0;
}
