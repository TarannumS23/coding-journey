#include<iostream>
using namespace std;

class Marvellous
{
    public :
        int No1, No2;

        Marvellous()          // Default constructor
        {
            cout<<"Inside default constructor\n";
            No1 = 0;
            No2 = 0;
        }
        Marvellous(int A, int B)     // Parameterised constructor
        {
            cout<<"Inside parameterised constructor\n";
            No1 = A;
            No2 = B;
        }
        Marvellous(Marvellous &ref)     // Copy constructor
        {
            cout<<"Inside copy constructor\n";
            No1 = ref.No1;
            No2 = ref.No2;
        }
        ~Marvellous()
        {
            cout<<"Inside destructor\n";
        }
};
int main()
{
    cout<<"Inside main\n";

    Marvellous mobj1;              // Default constructor
    Marvellous mobj2(11, 21);     // Parameterised constructor
    Marvellous mobj3(mobj2);      // Copy constructor

    cout<<"\n"<<mobj1.No1<<"\n";
    cout<<"\n"<<mobj2.No1<<"\n";
    cout<<"\n"<<mobj3.No1<<"\n";

    cout<<"End of main\n";
    
    return 0;
}