#include<iostream>
using namespace std;
class A{
	int a;
	public:
		void getdata(int a){
			a=a;	
		}	
		void show(){
			cout<<a;
		}
};
int main(){
	A m;
	m.getdata(2);
	m.show();
}
