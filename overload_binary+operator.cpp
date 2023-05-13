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

		void display(){
			cout<<real<<"+j"<<imag<<endl;
		}

		complex operator+(complex);
};

complex complex::operator+(complex c){

	complex temp;
	
	temp.real=real+c.real;
	temp.imag=imag+c.imag;

	return temp;
}

int main(){
	complex c1(4,6),c2(5,10),c3;
	c3=c1+c2;

	c1.display();
	c2.display();
	c3.display();

    return 0;
}