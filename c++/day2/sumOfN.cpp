#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;

    int i=1;
    int sum=0;
    while(i<=num){
        sum=sum+i;
        i++;
    }

    cout<<"Sum of first "<<num<<" natural numbers is "<<sum<<endl;
}