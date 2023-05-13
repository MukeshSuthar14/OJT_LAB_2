#include<iostream>
using namespace std;
class number
{
    int a,num;
    public:
    number()
    {
        a=0;
    }
    number(int num)
    {
        a=num;
    }
    number(number &obj)
    {
        cout<<"\nCopy constructor is called..."<<endl;
        a=obj.a;
    }
    void display()
    {
        cout<<"\nNmuber is "<<a;
    }
};
int main()
{
    number x(93),y(37),z(83);
    x.display();
    y.display();
    z.display();
    number z1(y);
    z1.display();
    return 0;
}
