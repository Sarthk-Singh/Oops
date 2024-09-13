/*Create a class called Time that has separate int member data for hours, minutes and
seconds. One constructor should initialize this data to 0, and another should
initialize it to fixed values. A member function should display it in 11:59:59 format.
A member function named add() should add two objects of type time passed as
arguments. A main ( ) program should create two initialized values together, leaving
the result in the third time variable. Finally it should display the value of this third
variable.*/
#include<iostream>
using namespace std;
class time
{
    private:
    int hours;
    int min;
    int sec;
    public:
    time()
    {
        hours=0;
        min=0;
        sec=0;
    }
    time(int hours,int min,int sec)
    {
        this->hours=hours;
        this->min=min;
        this->sec=sec;
    }
    void add(time ob1,time ob2)
    {
        hours=ob1.hours+ob2.hours;
        min=ob1.min+ob2.min;
        sec=ob1.sec+ob2.sec;
        if(sec>=60)
        {
            min=min+(sec/60);
            sec=sec%60;
        }
        if(min>=60)
        {
            hours=hours+(min/60);
            min=min%60;
        }
    }
    void display()
    {
        cout<<"Time"<<endl;
        cout<<hours<<":"<<min<<":"<<sec<<endl;
    }
};
int main()
{
    time ob1(13,43,62);
    time ob2(11,42,63);
    time ob3;
    ob3.add(ob1,ob2);
    ob3.display();
}