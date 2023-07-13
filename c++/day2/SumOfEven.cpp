#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    
    int i = 2; // Initialize i
    int sum = 0;
    
    while(i <= num){
        if(i % 2 == 0){
            sum = sum + i ;
        }
        i=i+1; // Increment i
    }

    cout<<"Sum of the first "<<num<<" even numbers is "<<sum<<endl;

    return 0;
}
