#include<iostream>
using namespace std;

int main(){
    char a;
    cout<<"Enter a character: ";
    cin>>a;

    // using ASCII values
    if (a >= 65 && a <= 90){
        cout<<a<<" is an uppercase alphabet"<<endl;
    }
    else if (a >= 97 && a <= 122){
        cout<<a<<" is a lowercase alphabet"<<endl;
    }
    else if (a >= 48 && a <= 57){
        cout<<a<<" is a digit"<<endl;
    }
    else{
        cout<<a<<" is a special character"<<endl;
    }
    return 0;
}
