#include<iostream>
using namespace std;
int main()
{
    int a[10];
    int i,total=0;
     for(i=0;i<10;i++)
    {
        cout<<"enter a["<<i<<"]:";
        cin>>a[i];
    }
    cout<<"array--------------------\n";
     for(i=0;i<10;i=i+2)
    {
        cout<<a[i]<<endl;
        total += a[i];
    }
    cout<<"Total is: "<<total;
}