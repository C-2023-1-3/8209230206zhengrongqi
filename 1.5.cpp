#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double f ;
    double t ;
    cout << "请输入华氏度: ";
    cin >> f;
    
    t = (f-32)/1.8;

    cout << "摄氏度为: " << fixed << setprecision(2) << t <<  endl;

    return 0;
}
