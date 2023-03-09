#include<iostream>
using namespace std;
int count=0;
class num
{
	public:
		num()
		{
			count++;
			cout<<"\nConstructor is called:"<<count;
		}
};
int main()
{
	cout<<"\nInside main";
	cout<<"\nCreating object:";
	num n1;
	{
		cout<<"\ncreating two object:";
		num n2,n3;	
	}
	cout<<"\nback to main";
	return 0;
}
