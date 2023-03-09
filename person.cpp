#include<iostream>
using namespace std;
class circle
{
	char name[10];
	int age;
	public:
	void getdata();
	void display();
};
void person:: getdata()
{
	cout<<"enter name:";
	cin>>name;
	cout<<"enter age:";
	cin>>age;
}
void person:: display()
{
	cout<<"name is:"<<name;
	cout<<"   age is:"<<age;
}
int main()
{
	person p;
	p.getdata();
	p.display();
	return 0;
}
