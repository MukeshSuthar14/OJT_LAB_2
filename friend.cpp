#include<iostream>
using namespace std;
class B;
class A
{	
	private:
		int numA;
	public:
		void setA()
		{
			numA=10;		
		}
		friend int add(A obja,B objb);
};
class B
{	
	private:
		int numB;
	public:
		void setB()
		{
			numB=20;
		}
		friend int add(A obja,B objb);
};
int add(A obja,B objb)
{
	return(obja.numA+objb.numB);
}
int main()
{
	A obja;
	B objb;
	obja.setA();
	objb.setB();
	cout<<"Addition is :"<<add(obja,objb);
	return 0;
}
