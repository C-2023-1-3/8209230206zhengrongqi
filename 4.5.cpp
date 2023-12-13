#include<iostream>
#include<string>
using namespace std;
int indexOf(const char s1[], const char s2[])
{
    int size1,size2;
    size1 = strlen(s1);
    size2 = strlen(s2);
    int a = -1;
    for (int i = 0; i <= size2 - size1; ++i)
    {
        int j;
        for (j = 0; j < size1;j++)
        {
            if (s2[i + j] != s1[j])
            {
                break;
            }
        }
        if (j == size1)
        {
            a = i;
            return a;
        }
    }
    return a;
}
int main()
{
    char s1[100];
    std::cout << "Enter the first string: ";
    cin.getline(s1, 100);
    std::cout << "Enter the second string: ";
    char s2[100];
    cin.getline(s2, 100);
    std::cout << "indexOf(";
    cout << "\"";
    for (int m = 0; m < strlen(s1); m++)
    {
        cout << s1[m];
    }
    cout << "\"";
    cout << ",";
    cout << "\"";
    for (int n = 0; n < strlen(s2); n++)
    {
        cout << s2[n];
    }
    cout << "\"";
    cout << ")" << "is  ";
    cout << indexOf(s1, s2) << endl;;


}