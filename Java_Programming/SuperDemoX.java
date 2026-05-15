class Base
{
    public int i;
    
    public Base(int no)
    {
        System.out.println("Inside Base constructor");
        this.i = no;
    }

    public void fun()
    {
        System.out.println("Inside Base fun");
    }
}

class Derived extends Base
{
    public int i;

    public Derived()
    {
        super(11);                     // explicit call Base constructor , must be at the top of constructor
        System.out.println("inside Derived constructor");
        this.i = 21;
    }

    public void gun()
    {
        System.out.println("inside gun of Derived");
        System.out.println("Value of i : "+i);
        System.out.println("Value of i from base : "+super.i);
    }
}

class SuperDemoX
{
    public static void main(String A[])
    {
        Derived dobj = new Derived();               

        dobj.gun();
    }
}
