#include<iostream>
using namespace std;
class shape{
    protected:
        int width;
        int height;
    public:
        void setwidth(int w){
            width=w;
        }
        void setheigth(int h){
            height=h;
        }
};
class rectangle:public shape{
    public:
        int getarea(){
            return width*height;
        }
};
int main(){
    rectangle r;
    r.setwidth(100);
    r.setheigth(200);
    cout<<"Total Area:"<<r.getarea()<<endl;
}
