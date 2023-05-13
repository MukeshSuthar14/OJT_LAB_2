#include<iostream>
using namespace std;
class rectangle{ //shape
    protected:
    int length;
    int width;
    public:
        void getdata(int l,int w){
            length=l;
            width=w;
        }
};
class area:public rectangle{  //paincost
    protected:
    int area=length*width;
    public:
        int setarea(){
            return area;
        }
};
class display:public area{  //rectangle
    public:
        void display1(){
            cout<<"Area of rectangle is:"<<area<<endl;
        }
};
int main(){
    rectangle r;
    r.getdata(40,50);
    r.setarea();
    r.display1();
}