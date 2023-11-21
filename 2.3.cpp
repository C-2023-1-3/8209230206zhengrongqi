
#include <iostream>
using namespace std ;
int main() {
    double A , B , C ;
    cout << "请输入第一条边长：" << endl ;
    cin >> A ;
    cout << "请输入第二条边长：" << endl ;
    cin >> B ;
    cout << "请输入第三条边长：" << endl ;
    cin >> C ;

    if ( A < B ) {
        swap ( A , B ) ;
    }
    if ( B < C ) {
        swap ( B , C ) ;
    }
    if ( A < B ) {
        swap ( A , B ) ;
    }

    if ( A > (B+C) || C < ( A - B ) )
    {
        cout << "您所输入的不是三角形" << endl ;
    }
    else if ( A == B && B == C  ){
        cout << "您所输入的是等边三角形" << endl ;
    }
    else if ( A == B || B == C  ){
        cout << "您所输入的是等腰三角形" << endl ;
    }
    else if ( A <= ( B + C ) && C>=( A - B ) )
        cout << "您所输入的是非等边三角形" << endl ;
    return 0;
}
