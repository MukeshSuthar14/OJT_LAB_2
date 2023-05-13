#include<iostream>
using namespace std;

class student{
    private:
    char name[20];
    int rollno;
    public:
    void getdetails(){
        cout<<"Enter name:";
        cin>>name;
        cout<<"Enter roll number:";
        cin>>rollno;
    }
    void display(){
        cout<<"Name:"<<name<<"\nRoll number:"<<rollno<<endl;
    }
};
class test{
    private:
    int hindi,maths,english,science,sst;
    public:
    void getdetails1(){
        cout<<"Hindi:";
        cin>>hindi;
        cout<<"Maths:";
        cin>>maths;
        cout<<"English:";
        cin>>english;
        cout<<"Science:";
        cin>>science;
        cout<<"S.S.T:";
        cin>>sst;
    }
    void display1(){
        cout<<"Hindi:"<<hindi;
        cout<<"\nMaths:"<<maths;
        cout<<"\nEnglish:"<<english;
        cout<<"\nScience:"<<science;
        cout<<"\nS.S.T:"<<sst<<endl;
    }
};
int main(){
    int n ,loop;
    cout<<"Enter total number of student:";
    cin>>n;
    student st[n];
    test t[n];
    for(loop=0;loop<n;loop++){
        cout<<"Enter details of student "<<loop+1<<" :\n";
        st[loop].getdetails();
        cout<<"Enter student "<<loop+1<<" marks:\n";
        t[loop].getdetails1();
    }
    cout<<endl;
    for(loop=0;loop<n;loop++){
        cout<<"Details of student "<<loop+1<<" :\n";
        st[loop].display();
        cout<<"Marks of student "<<loop+1<<" is:\n";
        t[loop].display1();
    }
    return 0;
}
