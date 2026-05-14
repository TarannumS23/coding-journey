#include<iostream>
using namespace std;

class Base
{
    public: 
        int i,j;

        Base()
        {
            cout<<"Inside Base constructor\n";
            i = 0;
            j = 0;
        }

        ~Base()
        {
            cout<<"inside Base destructor\n";
        }

        void fun()
        {
            cout<<"inside Base fun \n";
        }
};

class Derived : public Base
{

};

int main()
{
    Base bobj;

    //Derived dobj();
    return 0;
}
