#include<iostream>
using namespace std;
bool is_perime(int num)
{
     if(num == 1)
	{
		return false;
	}
	 else if (num==2)
	{

		return true;
	}
	else
	{

	int m = 0;
	for (int b = 2; b < num; b++)
	{   int a;
		a = num%b;
		if (a == 0)
		{
			m++;
		}
	}
	if (m > 0)
	{
		return false;
	 }
	else
	{
		return true;
	}
	}
}
int main()
{
	int k=0;
	int h= 1;
	for (int num = 1; num <= 900000; num++)
	{
		int m;
		m = is_perime(num);
		if (m == 1)
		{
			cout << num << "  ";
			k++;
			h++;
			if (h > 200)
			{
				break;
			};
			if (k == 10)
			{
				cout << endl;
				k = 0;
			};
		}
	}
}