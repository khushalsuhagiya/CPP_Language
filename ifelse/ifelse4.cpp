#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;

    cout<<"value :";
    cin>>a;
    cout<<"value :";
    cin>>b;

    c=a*b;
    d=a+b;

    if(c%d==0)
    {
        printf("yes %d",c);
    }
    else
    {
        printf("no %d",d);
    }
}