#include<iostream>
using namespace std;
class item
{
	static int count;
	int num,a;
	public:
	void getdata(int a)
	{
		a=num;
		count++;
	}
	void getcount()
	{
		cout<<"Count is "<<count;
	}	
};
int main()
{
	item q1,q2,q3;
	q1.getcount();
	q2.getcount();
	q3.getcount();
	q1.getdata(123);
	q2.getdata(234);
	q3.getdata(435);
	cout<<"After getting data.."<<endl;
	q1.getcount();
	q2.getcount();
	q3.getcount();
	return 0;
}
