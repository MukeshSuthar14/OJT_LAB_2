#include<iostream>
using namespace std;

int main(){
    int i, n ,count=0;
    cout<<"Enter a positive integer:";
    cin>>n;

    if(n==0){
        cout<<n<<" is not a prime number!!";
        exit(1);
    }
    else{
        for(i=2;i<n;i++){
            if(n%i==0){
                count++;
            }
        }
    }

    if(count>1){
        cout<<n<<" is not a prime number"<<endl;
    }
    else{
        cout<<n<<" is a prime number"<<endl;
    }
    return 0;
}