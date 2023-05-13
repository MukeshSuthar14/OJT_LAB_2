#include<iostream>
using namespace std;

int main(){
    char c;
    cout<<"Enter any character:";
    cin>>c;
    if(c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U'){
        cout<<c<<" is Vowel"<<endl;
    }
    else{
        cout<<c<<" is consonant"<<endl;
    }
    return 0;
}