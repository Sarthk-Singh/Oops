#include<iostream>
#include<string>
using namespace std;
class invoice
{
    string partNumber;
    string partDis;
    int quantity;
    double price;
    public:
    invoice(string partNumber,string partDis,int quantity,double price)
    {
        this->partNumber=partNumber;
        this->partDis=partDis;
        this->quantity=quantity;
        this->price=price;
    }
    void setNumber(string partNumber)
    {
        this->partNumber=partNumber;
    }
    void setDis(string partDis)
    {
        this->partDis=partDis;
    }
    void setQuantity(int quantity)
    {
        if(quantity<0)
            this->quantity=0;
        else
            this->quantity=quantity;
    }
    void setPrice(double price)
    {
        if(price<0)
            this->price=0.0;
        else
            this->price=price;
    }
    double amount()
    {
        return quantity*price;
    }
};
int main()
{
    invoice ob(" "," ",0,0.0);
    string number;
    string dis;
    int quantity;
    double price;
    double amount;
    
    cout<<"Enter the number"<<endl;
    cin>>number;
    ob.setNumber(number);

    cout<<"Enter the discription"<<endl;
    cin>>dis;
    ob.setDis(dis);

    cout<<"Enter the quantity"<<endl;
    cin>>quantity;
    ob.setQuantity(quantity);
    
    cout<<"Enter the price"<<endl;
    cin>>price;
    ob.setPrice(price);

    amount=ob.amount();
    cout<<"Amount:"<<amount<<endl;
}
