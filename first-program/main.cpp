#include <iostream>
#include "math.h"

using std::cin;
using std::cout;
using std::endl;

void Print(char ch)
{
    for (int i = 0; i < 10; i++)
    {
        cout << ch;
    }
    cout << endl;
}

int main()
{
    // Scalar
    int i = 2;
    int a = 10;
    // cout << "adresa: " << &a << endl;
    int *ptr = &a;
    // cout << "pointer" << ptr << endl;
    *ptr = 5;
    // cout << a << endl;
    // int b = *ptr;
    // cout << b << endl;
    
    // char s[8]{"Hello"};
    // cout << s << endl;
    // cout << "Hello!" << endl;
    // cout << i << endl;
    // char ch = 'a';
    // bool flag = false;
    // float f = 1.283f;
    // double d = 521.342;

    // Vector
    int arr1[5];
    int arr2[5] = {1, 2, 3, 4, 5};

    // int age;
    // cout << "Tell me your age: ";
    // cin >> age;
    // cout << "Your age is: " << age << endl;

    // char buff[512];
    // cout << "What is your name? ";
    // cin.getline(buff, 64, '\n');
    // cout << "Your name is: " << buff << endl;

    // int x, y;
    // cin >> x;
    // cin >> y;
    // int result = Add(x, y);
    // cout << result << endl;

    // Print('#');

    int m,n,result;
    cout<<"m="; cin>>m;
    cout<<"n="; cin>>n;
   // AddVal(&m,&n,&result);
  //  cout<<"Suma"<<result<<endl;

   // Swap(&m,&n);
  //  cout<<m<<" "<<n<<endl;
    Factorial(&m,&result);
    cout<<"Factorial de "<<m<<" = "<<result;
    return 0;
}
