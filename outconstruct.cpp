#include<iostream>
using namespace std;
class person
{
	char name[30];
	int age;
	public:
		person();
		void display();
};
person::person()
{
	cout<<"Enter your name:";
	cin>>name;
	cout<<"Enter your age:";
	cin>>age;
}
void person::display()
{
	cout<<"Your name is "<<name;
	cout<<"\nYour age is "<<age;
}
int main()
{
	return 0;
}
