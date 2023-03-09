#include<iostream>
using namespace std;
class person{
	public:
		void display1(){
			cout<<"person"<<endl;
		}
};
class student:public person{
	public:
		void display2(){
			cout<<"student"<<endl;
		}
};
class btech:public student{
	public:
		void display3(){
			cout<<"btech"<<endl;
		}
};
int main(){
	btech b;
	b.display1();
	b.display2();
	b.display3();
}
