#include<iostream>
using namespace std;
//int main()

class rectengle
{
	float lengh;
	float breath;
	float area;
	public:
		
	void getdata();
	void display();
};


void rectengle::getdata()
{

			cout<<"\n enter lengh:"<<"enter breath:";
			cin>>  lengh>>breath;
		
	//area=3.14*radius*radius;
	
}
void rectengle:: display()
{
	
	area=breath*lengh;
	cout<<"\n area of rectangle:"<<area;
	cin>>  area;
}
int main()
{
	rectengle p;
	p.getdata();
	p.display();
	return 0;
}
