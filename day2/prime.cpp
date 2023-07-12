#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;

    int i=2;

    while(i<num){
        if(num%i==0){
            cout<<num<<" is not prime number "<<i<<endl;
        }
        else{
            cout<<num<<" is a prime number "<<i<<endl;
        }
        i++;
    }
}