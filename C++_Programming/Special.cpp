#include<iostream>
using namespace std;

class Demo
{
    public:
       int i;               //characteristics
       float f;             //characteristics

       Demo()              //Constructor
       {
            cout<<"Inside Constructor\n";
            i = 0;
            f = 0.0f;
       }

       ~Demo()           // Destructor (works oppositly than constructor)
       {
            cout<<"Inside destructor\n";
       }

       void fun()           // Behavior
       {
           cout<<"Inside fun \n";
       }
};
int main()
{
    cout<<"inside main\n";

    Demo dobj;                  // Object creation

    cout<<"\n"<<dobj.i<<"\n";

    dobj.fun();
    
    cout<<"End of main\n";
    
    return 0;
}