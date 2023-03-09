#include<iostream>
using namespace std;
int main()
{
	int num,count;
	cout<<"Enter the number:";
	cin>>num;
	for(count=10;num>0;count++)
	{
		num=num/10;
	}
	cout<<"Number of digits are "<<count;
}
