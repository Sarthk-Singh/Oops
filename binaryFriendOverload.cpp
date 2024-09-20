//binary function overloading
#include<iostream>
using namespace std;
class binaryFriendOverload
{
    private:
    int x,y;
    public:
    binaryFriendOverload()
    {}
    binaryFriendOverload(int x,int y)
    {
        this->x=x;
        this->y=y;
    }
    void display()
    {
        cout<<"X:"<<x<<" ";
        cout<<"Y:"<<y<<endl;
    }
    friend binaryFriendOverload operator +(binaryFriendOverload ob1,binaryFriendOverload ob2);
    friend binaryFriendOverload operator -(binaryFriendOverload ob1,binaryFriendOverload ob2);
};
    binaryFriendOverload operator +(binaryFriendOverload ob1,binaryFriendOverload ob2)
    {
        binaryFriendOverload ob3;
        ob3.x=ob1.x+ob2.x;
        ob3.y=ob1.y+ob2.y;
        return ob3;
    }
    binaryFriendOverload operator -(binaryFriendOverload ob1,binaryFriendOverload ob2)
    {
        binaryFriendOverload ob3;
        ob3.x=ob1.x-ob2.x;
        ob3.y=ob1.y-ob2.y;
        return ob3;
    }
int main()
{
    binaryFriendOverload ob1(5,5);
    binaryFriendOverload ob2(5,5);
    binaryFriendOverload ob3;
    ob3=ob1+ob2;
    cout<<"Sum:"<<endl;
    ob3.display();
    ob3=ob1-ob2;
    cout<<"Difference:"<<endl;
    ob3.display();
}