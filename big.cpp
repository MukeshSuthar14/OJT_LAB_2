#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter first number a=";
	cin>>a;
	cout<<"Enter second number b=";
	cin>>b;
	cout<<"Enter third number c=";
	cin>>c;
	if(a<b)
	{
		if(c<b)
		{
			cout<<"b is bigger";
		}
		else
		{
			cout<<"c is bigger";
		}
	}
	else
	{
		if(c<a)
		{
			cout<<"a is bigger";
		}
		else
		{
			cout<<"c is bigger";
		}
	}
}
