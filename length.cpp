#include<iostream>
using namespace std;
class line
{
	double ln;
	public:
		double getlength();
		void setlength(double ln);
		line(double);
};
line::line(double ln)
{
	cout<<"\nlength is "<<ln;
}
double line::getlength()
{
	return ln;
}
void line::setlength(double ln)
{
	cout<<"\nNew length is "<<ln;
}
int main()
{
	line line(50.2);
	line.setlength(90);
	line.getlength();
	return 0;
}
