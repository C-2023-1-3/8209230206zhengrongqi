#include <iostream>
using namespace std;
int max (int a ,int b)
{
    if (b>a){
        swap (a,b) ;
    }
    int t = b ;
    while (b % t != 0 || a % t != 0){
        t--;
    }
    return t ;
}
int min (int a,int b)
{
    int p = a*b/max(a,b) ;
    return p;
}
int main() {
    int a,b ;
    cout<<"请输入第一个数字:"<<endl ;
    cin >> a;
    cout<<"请输入第二个数字:"<<endl ;
    cin >> b;
    cout << "最大公约数为" << max (a,b) << endl ;
    cout << "最小公倍数为" << min (a,b) << endl ;
}
