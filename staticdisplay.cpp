#include<iostream>
using namespace std;
class demo{
	static int x;
	public:
		static void display(){
			cout<<"Value of x="<<x;
		}
};
int demo::x=10;
int main(){
	demo d;
	d.display();
}
