#include <iostream>

using namespace std;
int main() {
    char letter ;
    int a ;
    
    cout << "请输入一个字母:";
    cin >> letter ;
    a = letter ;
    int b = a - 32 ;
    if ( a>=65 && a<=90 ) {
        cout <<"下一位字母的ASCII码为：" << a+1;
    }
    else if( a>=97 && a<=122 )
    {
        cout << (char)b << endl;
    }
    return 0;
    
    
    
}
