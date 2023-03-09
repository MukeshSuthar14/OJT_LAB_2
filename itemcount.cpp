#include<iostream>
using namespace std;
int count;
class item
{
	int n,a;
	public:
	void getdata(int n);
	void getcount();	
};
void item::getdata(int n)
{
	a=n;
	count++;
}
void item::getcount()
{
	cout<<"Count is:"<<count<<endl;
}
int main()
{
	item n1,n2,n3,n4;
	n1.getcount();
	n2.getcount();
	n3.getcount();
	n4.getcount();
	cout<<"After getting data.."<<endl;
	n1.getdata(64);
	n2.getdata(33);
	n3.getdata(24);
	n4.getdata(90);
	n1.getcount();
	n2.getcount();
	n3.getcount();
	n4.getcount();
	return 0;
}
