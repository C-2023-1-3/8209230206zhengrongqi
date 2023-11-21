#include <iostream>
using namespace std ;
int main() {
    double A , B ;
    char z ;
    cout << " 请输入你要计算的式子 " << endl ;
    cin >> A >> z >> B ;
    int q ;
    q = z ;
    if ( q == 43 ){
        cout << A + B << endl ;
    }
    else if ( q == 45 ){
        cout << A - B << endl ;
    }
    else if ( q == 42 ){
        cout << A * B << endl ;
    }
    else if ( q == 47 ){
        if ( B == 0 ){
            cout << "分母不可以为0";
        }
        else {
            cout << A / B << endl ;
        }
    }
    else {
        cout << "运算符不合法" << endl ;
    }


    return 0;
}
