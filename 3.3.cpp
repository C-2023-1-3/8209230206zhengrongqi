#include<iostream>
#include<iomanip>
using namespace std;
#include"mytemperature.h"
int main()
{
    cout << "请输入一个摄氏度：";
    double cel;
    cin >> cel;
    cout << fixed << setprecision(2)<< "该摄氏度=" << celsius_to_fah(cel) << "华氏度" << endl;
    cout << "请输入一个华氏度： ";
    double fah;
    cin >> fah;
    cout << "该华氏度="<<  fahrenheit_to_cels(fah) << "摄氏度" << endl;
    return 0;

}