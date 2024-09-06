/* Q Implement a C++ program by defining a class to represent a bank account. The class should include data members for the name of the 
depositor, the account number, the type of account (such as Savings or Current), and the balance amount in the account. The class should 
also have member functions to assign initial values to these data members, deposit an amount into the account, withdraw an amount after 
checking the balance to ensure sufficient funds are available, and display the depositor's name along with the current balance. */

#include<iostream>
using namespace std;

class bank
{
    string name;
    int acNumber;
    string acType;
    float balance;
    public:
    bank()
    {
        name="";
        acNumber=-1;
        acType="";
        balance=0;
    }
    void createAC(string name,int acNumber,string acType)
    {
        this->name=name;
        this->acNumber=acNumber;
        this->acType=acType;
    } 
    void show_details()
    {
        cout<<"Name: "<<name<<endl;
        //cout<<"Acount Number: "<<acNumber<<endl;
        //cout<<"Acount Type"<<acType<<endl;
        cout<<"Balance: "<<balance<<endl;
    }
    int deposite(int dpAmount)
    {
        balance+=dpAmount;
        cout<<"New balance: "<<balance<<endl;
    }
    void withdraw(int wdAmount)
    {
        if(wdAmount>balance)
        {
            cout<<"Low Bank Balance XD"<<endl;
        }
        else
        {
            balance-=wdAmount;
            cout<<"New Balance: "<<endl;
        }
    }
};
int main()
{
    int n,in,dp,wd,Cno;
    string name,acType;
    int acNumber;
    cout<<"Enter the number of accounts to create"<<endl;
    cin>>n;
    
    bank ac[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the details of customer "<<i+1<<endl;
        cout<<"Enter the name of account holder"<<endl;
        cin>>name;
        cout<<"Enter the account number: "<<endl;
        cin>>acNumber;
        cout<<"Enter the account type: "<<endl;
        cin>>acType;
        ac[i].createAC(name,acNumber,acType);
    }
    for(int i=0;i<n;i++)
    {
        //cout<<"Enter customer number:"<<endl;
        //cin>>Cno;
        cout<<"PRESS '1' to deposite // Press '2' to withdraw // PRESS '0' to check balance"<<endl;
        cin>>in;
        switch(in)
        {
            case 0:
                ac[i].show_details();
                break;
            case 1:
                cout<<"Enter the amount you want to deposite: "<<endl;
                cin>>dp;
                ac[i].deposite(dp);
                break;
            case 2:
                cout<<"Enter the amount to withdraw: "<<endl;
                cin>>wd;
                ac[i].withdraw(wd);
                break;
            default:
                cout<<"Invalid input"<<endl;
        }
    }
    return 0;
}