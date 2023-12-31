#include<iostream>
using namespace std;
class Time {
private:
    int hour;
    int minute;
    int second;
public:
    Time() {
        cout << "please enter hour:";
        cin >> hour;
        cout << "please enter minute:";
        cin >> minute;
        cout << "please enter second:";
        cin >> second;
    };
    void time() { cout << hour << ":" << minute << ":" << second << endl; };
};
int main() {
    Time t1;
    t1.time();
    return 0;
}