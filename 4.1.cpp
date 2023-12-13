#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    int karr[10] = { 0 };

    cout << "Enter ten numbers:";
    for (int i = 0; i < 10; i++)
    {
        int m;
        cin >> m;
        arr[i] = m;
    }
    int a = 0;

    for (int m = 0; m < 10; m++)
    {
        int b = 1;
        for (int h = 0; h < a; h++)
        {
            if (arr[m] == karr[h])
            {
                b = 0;
                break;
            }
        }
        if (b == 1)
        {
            karr[a] = arr[m];
            a++;
        }

    }
    cout << "The distinct numbers are:";
    for (int f = 0; f < a; f++)
    {
        cout << karr[f] << "  ";
    }
}