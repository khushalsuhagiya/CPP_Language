#include<iostream>
using namespace std;
class flight{
    int flightnumber ,n;
    char destination[20];
    float distance,fuel;
    int calfuel(){
        if (distance<=1000)
        {
            fuel= 500;
        }
        else if (distance>=1000 && distance<=2000)
        {
            fuel= 1100;
        }
        else if(distance>=2000)
        {
            fuel=2200;
        }
        return fuel;
    }
    public:
    void feedinfo(){
        cout<<"enter flightnumber:";
        cin>>flightnumber;
        cout<<"enter destination:";
        cin>>destination;
        cout<<"enter distance:";
        cin>>distance;
        n = calfuel();
    }

    void showinfo(){
        cout<<"flight is:"<<flightnumber<<endl;
        cout<<"destination is:"<<destination<<endl;
        cout<<"distance is:"<<distance<<endl;
        cout<<"fuel is:"<< fuel<<endl;
    }
};

int main(){
    flight a;
    a.feedinfo();
    a.showinfo();
}