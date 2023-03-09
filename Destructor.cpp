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
		~num()
		{
			cout<<"\nDestructor is called:"<<count;
			--count;
		}
};
int main()
{
	num n1,n2,n3;
	return 0;
}
