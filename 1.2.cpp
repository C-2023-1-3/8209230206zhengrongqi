# include <iostream>
using namespace std;
const double pi = 3.1415926;
int main()


{
    int number1;
    int number2;
    
    //定义圆的半径和高
    cout << "请输入圆锥的底面半径：" << endl;
    cin >> number1 ;
    cout << "请输入圆锥的高：" << endl;
    cin >> number2 ;
    cout << "圆锥的体积为" << number1 * number1 * number2 * pi /3<< endl;
