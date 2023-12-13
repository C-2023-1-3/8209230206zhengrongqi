#include<iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
    for (int n = 0; n < (size1 + size2); n++)
    {
        if (n < size1)
        {
            list3[n] = list1[n];
        }
        else
        {
            list3[n] = list2[n-size1];
        }
    }
    for (int m = 0; m < (size1 + size2-1); m++)
    {
        for (int n = 0; n < (size1 + size2 - 1 - m); n++)
        {
            if (list3[n] > list3[n + 1])
            {
                int tem;
                tem = list3[n];
                list3[n] = list3[n + 1];
                list3[n + 1] = tem;
            }
        }
    }
}
int main()
{
    int size1;
    cout << "Enter the list1: ";
    cin >> size1;
    int* list1 = new int[size1];
    for (int n = 0; n < size1; n++)
    {
        cin >> list1[n];
    }
    int size2;
    cout << "Enter the list2: ";
    cin >> size2;
    int *list2=new int[size2];
    for (int n = 0; n < size2; n++)
    {
        cin >> list2[n];
    }
    int *list3=new int[size1 + size2];
    for (int n = 0; n < (size1 + size2); n++)
    {
        if (n < size1)
        {
            list3[n] = list1[n];
        }
        else
        {
            list3[n] = list2[n];
        }
    }
    merge(list1, size1, list2, size2, list3);
    cout << "The merged list is ";
    for (int m = 0; m < (size1+size2); m++)
    {
        cout << list3[m] << "  ";
    }



}