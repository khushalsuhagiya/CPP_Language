#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<" first: ";
    cin>>a;
    cout<<" second: ";
    cin>>b;
    c=a*b;

    cout<<c;

    if(c%21==0)
    {
        printf("\tyes 3 and 7");
    }
    else
    {
        printf("\tnot 3 and 7");
    }
}