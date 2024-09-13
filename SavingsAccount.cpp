/*Create class SavingsAccount. Use a static variable annualInterestRate to store the
annual interest rate for all account holders. Each object of the class contains a private
instance variable savingsBalance indicating the amount the saver currently has on
deposit. Provide method calculateMonthlyInterest() to calculate the monthly
interest by multiplying the savingsBalance by annualInterestRate divided by
12.This interest should be added tosavingsBalance. Provide a static method
modifyInterestRate() that sets the annualInterestRate to a new value. Write a
program to test class SavingsAccount. Instantiate two savingsAccount objects,
saver1 and saver2, with balances of Rs2000.00 and Rs3000.00, respectively. Set
annualInterestRate to 4%, then calculate the monthly interest and print the new
balances for both savers. Then set the annualInterestRate to 5%, calculate the next
month’s interest and print the new balances for both savers*/
#include<iostream>
using namespace std;
class SavingsAccount
{
    private:
    static float annualInterestRate;
    float savingsBalance;
    float tosavingsBalance;
    public:
    SavingsAccount(float savingsBalance,float tosavingsBalance)
    {
        this->savingsBalance=savingsBalance;
        this->tosavingsBalance=tosavingsBalance;
    }
    static void modifyInterestRate(float r)
    {
        SavingsAccount::annualInterestRate=r/100;
    }
    void calculateMonthlyInterest()
    {
        tosavingsBalance+=savingsBalance*annualInterestRate/12;
        savingsBalance+=tosavingsBalance;
    }
    void display()
    {
        cout<<"Balance:"<<savingsBalance<<endl;
        cout<<"Interest:"<<tosavingsBalance<<endl;
    }
};
float SavingsAccount::annualInterestRate=0.04;
int main()
{
    SavingsAccount saver1(2000.0,0);
    SavingsAccount saver2(3000.0,0);
    saver1.calculateMonthlyInterest();
    saver1.display();
    saver2.calculateMonthlyInterest();
    saver2.display();
    saver1.modifyInterestRate(5);
    cout<<"Interest rate to 5%"<<endl;
    saver1.calculateMonthlyInterest();
    saver1.display();
    saver2.calculateMonthlyInterest();
    saver2.display();
    return 0;
}
