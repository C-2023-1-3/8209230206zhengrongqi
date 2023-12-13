#include<iostream>
using namespace std;


int main()
{
	bool arr[100];
	for (int i = 0; i < 100; i++)
	{
		arr[i] = 0;
	}
	for (int m = 1; m <= 100; m++)
	{

		for (int n=m; n <= 100;n = n + m)
		{
			if (arr[n-1] == 0)
			{
				arr[n-1] = 1;
			}
			else
			{
				arr[n-1] = 0;
			}
		}
	}
	for (int h = 0; h < 100; h++)
	{
		if (arr[h] == 1)
		{
			cout << h+1 << "  ";
		}
	}
	return 0;
}