/* Q Define a class named Hotel in C++ with the following specifications. The class should have private members: Rno to store the room 
number, Name to store the customer’s name, Tariff to store the per day charges, and NOD to store the number of days of stay. Additionally, 
it should have a private member function CALC() to calculate and return the total amount as NOD * Tariff. If the value of NOD * 
Tariff exceeds 10,000, the total amount should be calculated as 1.05 * NOD * Tariff. The public members of the class should include a 
function Checkin() to input the details for Rno, Name, Tariff, and NOD, and a function Checkout() to display the values of Rno, Name, 
Tariff, NOD, and the calculated amount (by calling the CALC() function).  */


#include <iostream>
using namespace std;

class hotel
{
    int Rno;
    string name;
    float amount;
    int tariff;
    int DOS;

    public:

    void checkIn(int Rno , string name , int tariff ,int DOS){
      this-> Rno = Rno;
      this-> name = name;
      this-> tariff = tariff;
      this-> DOS = DOS;
    }
     
  

    void checkout()
    {
        calc();
        cout << "Room Number : " << Rno << endl;
        cout << "Name : " << name << endl;
        cout << "Tariff : " << tariff << endl;
        cout << "DOS : " << DOS << endl;
        cout << "Amount : " << amount << endl;
    }

    void calc()
    {
        amount = DOS*tariff;
        if(amount > 10000) {
           amount*=1.05;
        }

    }
};

int main()
{
    string name;
    int room , tar , days;
    int n;
    cout<<"Enter the number of customers"<<endl;
    cin>>n;
    hotel op[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter details for Customer no."<<i+1<<endl;
        cout<<"Enter your name: ";
        cin >> name;
        cout<<"Enter your room number: ";
        cin>>room;
        cout<<"Enter your tariff: ";
        cin>>tar;
        cout<<"Enter number of days: ";
        cin>>days;
        op[i].checkIn(room,name,tar,days);
    }
    cout<<"**CHECKOUT**"<<endl;
    for(int i=0;i<n;i++)
    {
        op[i].checkout();
    }
}