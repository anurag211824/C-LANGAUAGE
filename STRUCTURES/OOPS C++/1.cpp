#include<iostream>

using namespace std;
// create a room class
class room{
    public:
    double length;
    double breadth;
    double height;

    double calcualteArea(){ //calculate area function
        return length*breadth;
    }
    double calculateVolume(){ //calculate volume function
        return length*breadth*height;
    }
};
int main(){
    cout<<"enter room dimensions:\n";
    room a;
    cout<<"enter length:";
    cin>> a.length;
    cout<<"enter breadth:";
    cin>>a.breadth;
    cout<<"enter height:";
    cin>>a.height;
    // calculation of area and volume
    cout<<"the area of room is:"<<a.calcualteArea()<<endl;
    cout<<"the volume of room is:"<<a.calculateVolume()<<endl;

return 0;
}