#include<iostream>
using namespace std;
class student
{
    public:
    int rollno,maths,sci,eng,total;
    float per;
    char grad,sname[50];
    void setdata()
    {
        cout<<"enter roll no:";
        cin>>rollno;
        cout<<"enter sname:";
        cin>>sname;
        cout<<"enter maths marks:";
        cin>>maths;
        cout<<"enter sci marks:";
        cin>>sci;
        cout<<"enter eng marks:";
        cin>>eng;
    }
    void getdata()
    {
        total =maths +sci+eng;
        per =(float)total/3;

        if(maths<=32 || sci<=32 || eng<=32){
            grad = 'F';
        }else if(per>=90 && per<=100){
            grad = 'A';
        }else if(per>=70 && per<=89){
            grad = 'B';
        }else if(per>=55 && per<=69){
            grad = 'C';
        }else if(per>=54 && per<=33){
            grad = 'D';
        }else{
            grad = 'F';
        }
    }
    void calc()
    {
      cout<<"rollno \t"<<"sname \t"<<"maths \t"<<"sci \t"<<"eng \t"<<"total \t"<<"per \t"<<"grad \n";
      cout<<rollno<<"\t"<<sname<<"\t"<<maths<<"\t"<<sci<<"\t"<<eng<<"\t"<<total<<"\t"<<per<<"\t"<<grad<<"\n";
    }
};

int main()
{
    student result;
    result.setdata();
    result.getdata();
    result.calc();
}









