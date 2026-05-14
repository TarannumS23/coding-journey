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
    public:
        int x;

        Derived()
        {
            cout<<"inside derived constructor\n";
            x = 0;
        }

        ~Derived()
        {
            cout<<"Inside derived destructor\n";
        }

        void gun()
        {
            cout<<"Inside gun of Derived\n";
        }
};

class DerivedX : public Derived
{
    public:
        int y;
        
        DerivedX()
        {
            cout<<"Inside DerivedX constructor\n";
            y = 0;
        }

        ~DerivedX()
        {
            cout<<"Inside DerivedX destructor\n";
        }

        void sun()
        {
            cout<<"inside DerivedX sun\n";
        }
};

int main()
{
    cout<<"Inside main\n";

    DerivedX dobj;

    cout<<"Size of Base class object is : "<<sizeof(Base)<<"\n";                       // 8
    cout<<"Size of Derived class object is : "<<sizeof(Derived)<<"\n";                 // 12
    cout<<"Size of DerivedX class object is : "<<sizeof(DerivedX)<<"\n";               // 16

    cout<<dobj.i<<"\n";             // 0
    cout<<dobj.j<<"\n";             // 0
    cout<<dobj.x<<"\n";             // 0
    cout<<dobj.y<<"\n";             // 0

    dobj.fun();
    dobj.gun();
    dobj.sun();

    cout<<"End of main\n";

    return 0;
}
