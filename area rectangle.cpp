#include<iostream>
using namespace std;
class rectangle{
	protected:
	int length;
	int width;
	public:
		void getdata(int l,int w)
		{ 
		length=l;
		width=w;
		}
};
class area:public rectangle{
	protected:
	int area=length*width;
	public:
		int setarea()
		{
			return area;
		}
};
class display:public area{
	public:
		void display1()
		{ 
		cout<<"area of rectangle is:"<<area<<endl;
		}
};
int main()
{ 
rectangle r;
r.getdata(40,50);
r.setarea();
r.displayarea();
}
