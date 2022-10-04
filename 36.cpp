#include<iostream>
using namespace std;
int main()
{
    int s= 45;
    int t = 30;
    cout<<"The number before swaping : a is "<<s<<" and b is "<<t<<endl;
    int temp = s;
    s = t;
    t = temp;
    cout<<"The number after swaping : a is "<<s<<" and b is "<<t<<endl;
    return 0;
}

// *************** Taking input by user and swap them *****************

// #include<iostream>
// using namespace std;
// int main ()
// {
//     int a,b;
//     cout<<"Enter the first number :"<<endl;
//     cin>>a;
//     cout<<"Enter the second number :"<<endl;
//     cin>>b;
//     cout<<"The value before swaping : a is "<<a<<" and b is "<< b<< endl;
//     swap(a,b);
//     cout<<"The value after swaping : a is "<<a<<" and b is "<<b<<endl;
//     return 0;
// }
