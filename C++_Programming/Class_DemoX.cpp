#include<iostream>
using namespace std;

class Demo
{
    public:
       int i;               //characteristics
       float f;             //characteristics

       void fun()           // Behavior
       {
           cout<<"Inside fun \n";
       }
};
int main()
{
    Demo dobj;
    
    cout<<sizeof(dobj)<<"\n";          //8
    
    return 0;
}