#include<iostream>
using namespace std;
class car{
	public:
		void display1(){
			cout<<"car"<<endl;
		}
};
class fuelcar{
	public:
		void display2(){
			cout<<"fuelcar"<<endl;
		}
};
class elcetcar:public car{
	public:
		void display3(){
			cout<<"elcetcar"<<endl;
		}
};
class hybridcar:public fuelcar,public elcetcar{
	public:
		void display4(){
			cout<<"hybrid"<<endl;
		}
};
int main(){
	hybridcar h;
	h.display1();
	h.display2();
	h.display3();
	h.display4();
}
