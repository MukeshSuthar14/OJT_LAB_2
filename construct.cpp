#include<iostream>
using namespace std;
class person
{
	char name[30];
	int age;
	public:
	person()
	{
		cout<<"Enter your name:";
		cin>>name;
		cout<<"Enter your age:";
		cin>>age;
	}
	void display();
};
void person:: display()
{
	cout<<"name is:"<<name;
	cout<<"\nAge is:"<<age;
}
int main()
{
	person p;	
	p.display();
	return 0;
}
