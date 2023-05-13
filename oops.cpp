#include<iostream>
using namespace std;

class student{
    char name[20];
    int roll;
    public:
    void getdata(){
        cout<<"Enter name:";
        cin>>name;
        cout<<"Enter rollno:";
        cin>>roll;
    }
    void display(){
        cout <<"Name of student is "<<name<<" roll no is "<<roll<<endl;
    }
};

int main(){
    student s1;
    s1.getdata();
    cout<<"hello world!"<<endl;
    s1.display();
    return 0;
}