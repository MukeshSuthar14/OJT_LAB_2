#include<iostream>
using namespace std;
class static_demo
{
	public:
		static int count;	
};
int static_demo::count=50;
int main()
{
	cout<<"Value of count is:";
	cout<<static_demo::count;
	return 0;
}
