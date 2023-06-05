#include<iostream>
using namespace std;
class bastman{
    int becod;
    char bname[20];
    float runs,innings,notout,batavg;
    int calcavg(){
        return runs/(innings-notout);
    }

    public:
    void setdata()
    {
        cout<<"enter becod :";
        cin>>becod;  
        cout<<"enter bname :";
        cin>>bname;      
        cout<<"enter innings :";
        cin>>innings;  
        cout<<"enter runs :";
        cin>>runs;    
        cout<<"enter notout:"; 
        cin>>notout;
        batavg=calcavg();     
    }

    void getdata()
    {
        cout<<"becod:"<<becod<<endl;
        cout<<"bname:"<<bname<<endl;
        cout<<"innings:"<<innings<<endl;
        cout<<"runs:"<<runs<<endl;
        cout<<"noyout:"<<notout<<endl;
        cout<<"batavg:"<<(float)batavg<<endl;
    }
};

int main(){
    bastman a;
    a.setdata();
    a.getdata();
}