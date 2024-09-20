/*Using the concept of operator overloading. Implement a program to overload the
following:
a. Unary –
b. Unary ++ preincrement, postincrement
c. Unary -- predecrement, postdecrement*/
#include<iostream>
using namespace std;
class unary
{
    int x;
    public:
    unary()
    {}
    unary(int x)
    {
        this->x=x;
    }
    void display()
    {
        cout<<x<<endl;
    }
    int operator -()
    {
        x=x*-1;
        return x;
    }
    int operator ++()
    {
        x=x+1;
        return x;
    }
    int operator ++(int noUse)
    {
        x=x+1;
        return x; 
    }
    int operator --()
    {
        x=x-1;
        return x;
    }
    int operator --(int noUse)
    {
        x=x-1;
        return x;
    }
};
int  main()
{
    unary ob(20);
    ob.display();
    -ob;
    cout<<"Unary - :"<<endl;
    ob.display();
    ++ob;
    cout<<"Unary pre++ :"<<endl;
    ob.display();
    ob++;
    cout<<"Unary post++ :"<<endl;
    ob.display();
    --ob;
    cout<<"Unary pre-- :"<<endl;
    ob.display();
    ob--;
    cout<<"Unary post-- :"<<endl;
    ob.display();
}
