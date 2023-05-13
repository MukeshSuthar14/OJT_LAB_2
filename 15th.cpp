#include<iostream>
using namespace std;
class banana{
    public:
        void display1(){
            cout<<"banana class"<<endl;
        }
};
class mango{
    public:
        void display2(){
            cout<<"mango class"<<endl;
        }
};
class orange{
    public:
        void display3(){
            cout<<"orange class"<<endl;
        }
};
int main(){
    banana b;
    mango m;
    orange o;
    b.display1();
    m.display2();
    o.display3();
}