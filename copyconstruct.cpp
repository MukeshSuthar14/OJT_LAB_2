#include<iostream>
using namespace std;
class number
{
	int a,num;
	public:
		number(){
			a=0;
		}
		number(int num)
		{
			a=num;
		}
		number(number &obj)
		{
			cout<<"\nCopy constructor is..."<<endl;
			a=obj.a;
		}
		void display()
		{
			cout<<"\nNumber is "<<a;
		}
};
int main()
{
	number x(876),y(867),z(732);
	x.display();
	y.display();
	z.display();
	number z1(x);
	z1.display();
	return 0;
}
