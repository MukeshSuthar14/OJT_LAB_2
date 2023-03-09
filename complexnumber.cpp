#include<iostream>
using namespace std;
class complex{
	int real,imag;
	public:
		complex(){
			real=0;
			imag=0;
		}
		complex(int x,int y){
			real=x;
			imag=y;
		}
		complex operator+(complex);
		void display(){
			cout<<x<<"+j"<<y;
		}
};
complex complex::operator+(complex){
	complex temp;
	temp.real=real+c.real;
	temp.imag=imag+c.imag;
	return temp;
}
int main(){
	complex c1(4,6),c2(5,10);
	c3=c1.operator+c2;
	c3=c1+c2;
	c1.display();
	c2.display();
	c3.display();
}
