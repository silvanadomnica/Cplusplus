#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void Print(int *ptr)
{
    cout << *ptr << endl;
    *ptr = 700;
}
int main()
{
    const int CHUNK_SIZE = 512;
    const int *ptr = &CHUNK_SIZE;
    int x = 10;
    Print(&x);
    cout << "main-x" << x << endl;
    
    int x = 5;
    const int MAX = 12;
    int &ref_x1 = x;
    const int &ref_x2 = x;

    const int *ptr1 = &x;
    int *const ptr2 = &x;
    const int *const ptr3 = &x;

    const int *ptr3 = &MAX;
    const int *ptr4 = &MAX;

    const int &r1 = ref_x1;
    const int &r2 = ref_x2;

    const int *&p_ref1 = ptr1;
    const int *p_ref2 = ptr2;
    cout << x << endl;
    return 0;
}