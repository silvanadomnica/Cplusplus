#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void Add(int a, int b, int &result); // Add two numbers and return the result through a reference parameter
void Factorial(int a, int &result);  // Find factorial of a number and return that through a reference parameter
void Swap(int &a, int &b);           // Swap two numbers through reference arguments
int main()
{
    int x = 10;   // referent
    int &ref = x; // reference
    int y = 20;
    ref = y;
    int result;
    int i=5; int j=6;
    cout << "x=" << x << endl;
    cout << "ref=" << ref << endl;
    cout << "adresa x: " << &x << endl;
    cout << "adresa ref: " << &ref << endl;
    Add(x,y,result);
    cout<<"sum="<<result<<endl;
    Swap(i,j);
    cout<<"i="<<i<<endl<<"j="<<j<<endl;
    Factorial(i,result);
    cout<<"Factorial de "<<j<<" = "<<result<<endl;

    return 0;
}
void Add(int a, int b, int &result)
{
    result=a+b;
}
void Factorial(int a, int &result)
{
    result=1;
    for(int i=1;i<a;i++)
    {
        result*=i;
    }
}
void Swap(int &a, int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}