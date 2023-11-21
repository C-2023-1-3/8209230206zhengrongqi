#include<iostream>
using namespace std;
int main()
{
    cout << "请任意输入一行句子。" << endl ;
    char c ;
    int i = 0 , j = 0 , k = 0 , t = 0 ;
    while ( (c = getchar()) != '\n' )
    {
        if(c==' ')
        {
            i++ ;
        }
        else if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
        {
            j++ ;
        }
        else if (c >= '0' && c <= '9')
        {
            k++ ;
        }
        else
        {
            t++ ;
        }
    }
    cout << "空格有：" << i << "个" << endl;
    cout << "字母有：" << j << "个" << endl;
    cout << "数字有：" << k << "个" << endl;
    cout << "其他有：" << t << "个" << endl;

    return 0 ;
}

