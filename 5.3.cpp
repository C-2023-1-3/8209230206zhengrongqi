#include <iostream>
using namespace std;

class RectangularColumn{
public:
    void inputParameter();
    int volume();
    void outputVolume();

private:
    int length;
    int width;
    int height;
};

void RectangularColumn::inputParameter(){
    cout<<"Enter Rectangular Column Length: ";
    cin>>length;
    while(length <= 0){
        cout<<"Length Error! Retry!\nEnter Rectangular Column Length: ";
        cin>>length;
    }

    cout<<"Enter Rectangular Column Width: ";
    cin>>width;
    while(width <= 0){
        cout<<"Width Error! Retry!\nEnter Rectangular Column Width: ";
        cin>>width;
    }

    cout<<"Enter Rectangular Column Height: ";
    cin>>height;
    while(height <= 0){
        cout<<"Height Error! Retry!\nEnter Rectangular Column Height: ";
        cin>>height;
    }
    cout<<endl;
}

int RectangularColumn::volume(){
    return length * width * height;
}

void RectangularColumn::outputVolume(){
    cout<<"Rectangular Column Volume: ";
    cout<<volume()<<endl<<endl;
}

int main(){
    RectangularColumn r1, r2, r3;

    r1.inputParameter();
    r2.inputParameter();
    r3.inputParameter();

    r1.outputVolume();
    r2.outputVolume();
    r3.outputVolume();

    system("pause");
    return 0;
}
