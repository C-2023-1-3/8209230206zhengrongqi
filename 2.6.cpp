
 #include <iostream>
using namespace std ;
int main() {
    int a ;
    int b ;
    if ( a > b ){
        swap (a,b) ;
    }
    int c = b ;
    cout << " 请输入第一个数字： " <<  endl ;
    cin >> a ;
    cout << " 请输入第二个数字： " <<  endl ;
    cin >> b ;
        for ( int c = b ; c >= 1 ; c = c-1 ) {
            if ( b % c == 0 && a % c == 0 ){
                cout << "最大公因数为：" << c << endl ;
                break ;
            }
        }
        for ( int d = b ; d <= a*b ; d = d+1 ){
            if ( d % a == 0 && d % b == 0){
                cout << "最小公倍数为：" << d << endl ;
                break ;
            }
        }


    return 0;
}


