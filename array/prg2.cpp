#include<iostream>
using namespace std;
int main()
{
    int a[5],b[5];
    int i;
    for(i=0;i<5;i++)
    {
        cout<<"enter a["<<i<<"]: ";
        cin>>a[i];
    }
     for(i=0;i<5;i++)
    {
        cout<<"enter b["<<i<<"]:";
        cin>>b[i];
    }
     cout<<"\n-----array-----\n";
     cout<<" A";
     cout<<"\t B";
     cout<<"\ttotal";
     for(i=0;i<5;i++)
    {
        printf("\n %d\t %d \t%d",a[i],b[i], a[i]+b[i]);
    }
}
