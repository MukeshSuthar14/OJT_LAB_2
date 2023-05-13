#include<iostream>
using namespace std;
class shape{
    protected:
        int height;
        int base;
    public:
        void setbase(int b){
            base=b;
        }
        void setheight(int h){
            height=h;
        }
};
class square:public shape{
    public:
        int getarea(){
            return (height*height);
        }  
};
class triangle:public shape{
    public:
        int getarea(){
            return (0.5*height*base);
        }
};
int main(){
    shape s;
    triangle t;
    t.setbase(12);
    t.setheight(15);
    cout<<"Area of triangle :"<<t.getarea()<<endl;
}
