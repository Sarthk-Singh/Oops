/*Create a class Complex having two int type variable named real & img denoting
real and imaginary part respectively of a complex number. Overload +, - , ==
operator to add, to subtract and to compare two complex numbers being denoted by
the two complex type objects*/
#include<iostream>
using namespace std;
class complex
{
    private:
    int real;
    int imag;
    public:
    complex()
    {
        real=0;
        imag=0;
    }
    complex(int real,int imag)
    {
        this->real=real;
        this->imag=imag;
    }
    complex operator +(complex ob)
    {
        complex ob3;
        ob3.real=real+ob.real;
        ob3.imag=imag+ob.imag;
        return ob3;
    }
    complex operator -(complex ob)
    {
        complex ob3;
        ob3.real=real-ob.real;
        ob3.imag=imag-ob.imag;
        return ob3;
    }
    bool operator ==(complex ob)
    {
        if(real==ob.real&&imag==ob.imag)
        {
            return true;
        }
        return false;
    }
    
    void display()
    {
        cout<<"Real:"<<real<<" Imag:"<<imag<<endl;
    }
};
int main()
{
    complex ob1(3,3);
    complex ob2(3,3);
    complex ob3;
    ob3=ob1+ob2;
    cout<<"Sum:"<<endl;
    ob3.display();

    ob3=ob1-ob2;
    cout<<"Difference:"<<endl;
    ob3.display();
    
    if(ob1==ob2)
        cout<<"Equal"<<endl;
    else
        cout<<"Not equal"<<endl;
    return 0;
}
