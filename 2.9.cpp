#include <iostream>
using namespace std ;
int main() {
   int d = 0 ;
   double m = 0 ;
   int n = 2 ;
   while ( n <= 100 ){
       d++ ;
       m += 0.8 * n ;
       n *= 2 ;
   }
   cout << "平均花钱：" << m/d << endl ;
    return 0;
}
