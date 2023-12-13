#include<iostream>
#include<string>
using namespace std;
void count(const char s[], int counts[])
{
    int size;
    size = strlen(s);
    for (int m = 0; m < size; m++)
    {
        int h;
        h = s[m];
        if (h>=65&&h<=90)
        {
            counts[h - 65] = counts[h - 65] + 1;
        }
        else if (h >= 97 && h <= 122)
        {
            counts[h - 97] = counts[h - 97] + 1;
        }
    }

}
int main()
{
    cout << "Enter a string: ";
    char s[100];
    cin.getline(s, 100);
    int counts[26];
    for (int n = 0; n < 26; n++)
    {
        counts[n] = 0;
    }
    count(s, counts);
    for (int m = 0; m < 26; m++)
    {
        if (counts[m] != 0)
        {
            cout << char(m + 97)<< ": " << counts[m] << " times" << endl;
        }
    }


}