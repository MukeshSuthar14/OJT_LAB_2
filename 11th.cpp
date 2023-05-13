#include<iostream>
using namespace std;
class B{
		protected:
		int a;
	int a;
	public:
		int b;
		void get_ab(){
			a=10;
			b=5;
		}
		int get_a(){
			return a;
		}
		void show_a(){
			cout<<a<<endl;
		}
};
class D:public B{
	int c;
	public:
		void mul(){
			c=b*get_a();
		}  
		void display(){
			cout<<get_a()<<endl<<b<<endl<<c<<endl;
		}
		int get_a(){
			return a;
		}	
};
int main(){
	D d;
	d.get_ab();
	d.mul();
	d.show_a();
	d.display();
	cout<<endl;
	d.a=20;
	d.mul();
	d.display();
}
