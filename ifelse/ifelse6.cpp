#include<iostream>
using namespace std;
int main()
{
    int ks,ss,dd;
    
    cout<<"value :";
    cin>>ks;

    cout<<"value :";
    cin>>ss;

    cout<<"value :";
    cin>>dd;

    if(ks>ss && ks>dd)
       {
        printf("value %d",ks);
       }
         else if(dd>ss)   
        {
            printf("value %d",dd);
        } 
         else
        {
            printf("value %d",ss);
        }
    

}