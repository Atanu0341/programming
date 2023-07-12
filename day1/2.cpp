#include<iostream>
using namespace std;

int main()
{
    int a = 10;
    cout << "Value of a is: " << a << endl;

    int size = sizeof(a);
    cout << "Size of a is: " << size << endl;
    
    char b = 'A';
    cout << "\nValue of b is: " << b << endl;

    int sizeb = sizeof(b);
    cout << "Size of b is: " << sizeb << endl;

    bool c = true;
    cout << "\nValue of c is: " << c << endl;

    int sizec = sizeof(c);
    cout << "Size of c is: " << sizec << endl;

    float d = 10.5;
    cout << "\nValue of d is: " << d << endl;

    int sized = sizeof(d);
    cout << "Size of d is: " << sized << endl;

    double e = 10.5;
    cout << "\nValue of e is: " << e << endl;

    int sizee = sizeof(e);
    cout << "Size of e is: " << sizee << endl;

    return 0;
}