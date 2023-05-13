#include<iostream>
using namespace std;
class A{
    public:
        void display1(){
            cout<<" hello";
        }
};
class B{
    public:
        void display2(){
            cout<<" world";
        }
};
class C:public A,public B{
    public:
        void display3(){
            cout<<" c++";
        }
};
int main(){
    C c;
    c.display1();
    c.display2();
    c.display3();
    cout<<endl;
}