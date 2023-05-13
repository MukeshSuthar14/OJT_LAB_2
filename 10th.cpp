#include<iostream>
using namespace std;

class animal{
    public:
    int legs=4;
    void display1(){
        cout<<"Dog have "<<legs<<" leg"<<endl;
    }
};

class dog:public animal{
    public:
    int tail=1;
    void display2(){
        cout<<"Dog have "<<tail<<" tail"<<endl;
    }
};

int main(){
    //animal a;
    dog d;
    d.display1();
    d.display2();
    return 0;
}
