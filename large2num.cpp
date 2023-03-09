#include<iostream>
using namespace std;
class set
{
	int a,b,c,big;
	public:
		void input();
		void largest();
		void display();
};
void set::input()
{
	cout<<"Enter first number:";
	cin>>a;
	cout<<"Enter second number:";
	cin>>b;
}
void set::largest()
{
	if(a<b)
	{
		big=b;
	}
	else
	{
		big=a;
	}
}
void set::display()
{
	cout<<big<<" is largest number";
}
int main()
{
	set s;
	s.input();
	s.largest();
	s.display();
}
