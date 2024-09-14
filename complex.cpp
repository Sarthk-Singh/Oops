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
    void display()
    {
        cout<<real<<" "<<imag<<endl;
    }
};
int main()
{
    complex ob1(2,2);
    complex ob2(3,3);
    complex ob3;
    ob3=ob1+ob2;
    ob3.display();
    return 0;
}
