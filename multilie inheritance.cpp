#include<iostream>
using namespace std;   //multiple inheritance
class A{
	public:
		void display1()
		{ 
		cout<<"universe";
		}
};
class B{
	public:
		void display2()
		{ 
		cout<<"earth";
		}
	
};
class C:public A,public B{
	public:
    void display3()
	{
		cout<<"star";
	}	
	
};
int main()
{ 
C c;
c.display1();
c.display2();
c.display3();

}
