#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int Add(int x, int y)
{
    int sum = x + y;
    cout << "Sum is: " << sum << endl;
    return sum;
}
int Add2(int *a, int *b)
{
    int sum;
    sum = *a + *b;
    return sum;
}
void AddVal(int *a, int *b, int *result)
{
    *result = *a + *b;
}
void Swap(int *a, int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void Factorial(int *a, int *result)
{
    *result=1;
    for(int i=1;i<=(*a);i++)
    {
        *result=*result*i;
    }
}