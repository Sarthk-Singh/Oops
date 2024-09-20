/*Using the concept of operator overloading. Implement a program to overload the
following:
Using friend function
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
    friend void operator -(unary &ob);
    friend void operator ++(unary &ob);
    friend void operator ++(unary &ob,int noUse);
    friend void operator --(unary &ob);
    friend void operator --(unary &ob,int noUse);
};
void operator -(unary &ob)
{
    ob.x=ob.x*-1;
}
void operator ++(unary &ob)
{
    ob.x=ob.x+1;
}
void operator ++(unary &ob,int noUse)
{
    ob.x=ob.x+1;
} 
void operator --(unary &ob)
{
    ob.x=ob.x-1;
}
void operator --(unary &ob,int noUse)
{
    ob.x=ob.x-1;
}
int main()
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