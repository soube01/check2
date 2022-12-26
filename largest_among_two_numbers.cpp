#include<iostream>
using namespace std;
int maximum(int e,int d);
int minimum(int ,int);
int main()
{
    int a,b,c,d;
    cout<<"Enter 1st number="<<endl;
    cin>>a;
    cout<<"Enter 2nd number="<<endl;
    cin>>b;
    c=maximum(a,b);
    d=minimum(a,b);
    cout<<"Greatest value is:"<<c<<endl;
    //d=minimum(a,b);
    cout<<"smallest value is:"<<d<<endl;
    return 0;
    
}
int maximum(int a,int b)
{
    if(a>b)
    return a;
    else
    return b;
}
int minimum (int a,int b)
{
    if(a<b)
    return a;
    else
    return b;
}