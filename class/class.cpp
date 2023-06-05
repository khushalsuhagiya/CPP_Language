#include<iostream>
using namespace std;
class test
{
    int n;
    public:
    void setdata()
    {
        cout<<"enter n:";
        cin>>n;
    }
    void getdatd()
    {
        cout<<"value of n:"<<n;
    }
};
int main(){
    test a;
    a.setdata();
    a.getdatd();
}