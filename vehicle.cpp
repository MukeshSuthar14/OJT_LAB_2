#include<iostream>
#include<string.h>
using namespace std;
class vehicle{
	protected:
		char name[50];
	public:
		void setname(char n[50]){
			strcpy(name,n);
		}
		void getname(){
			cout<<"Vehicle name is:"<<name<<endl;
		}
};
class wheels:public vehicle{
	protected: 
		int wheels;
	public:
		void setwheels(int w){
			wheels=w;
		}
		void getwheels(){
			cout<<"Wheel count is:"<<wheels<<endl;
		}
};
class car:public wheels{
	protected:
		int height,length;
	public:
		void setdetails(int h,int l){
			height=h;
			length=l;
		}
		void getdetails(){
			cout<<"vehicle heigth and length is:"<<height<<" "<<length<<endl;
		}
};
int main(){
	car c;
	c.setname("vehicle");
	c.setwheels(4);
	c.setdetails(1,5);
	c.getname();
	c.getwheels();
	c.getdetails();
}
