#include <iostream>
using namespace std ;
int main() {
 double m , n ;
 double a ;
 cout << "请输入数字a：" << endl ;
 cin >> a ;
 m = a ;
 do {
     swap ( m , n ) ;
     n = ( 1.0 / 2 ) * ( m + (a/m)) ;
 }
 while ( m - n >= 1e-5 || n - m >= 1e-5 );
 cout << n << endl ;
    return 0;
}
