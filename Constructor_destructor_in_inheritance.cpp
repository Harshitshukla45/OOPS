#include <iostream>
using namespace std;
class A 
{
    int a;
    public:
    A(int x)
    {
        a=x;
        cout<<"A class constructor initialized"<<"\n";
    }
    void dispa(void)
    {
        cout<<"value of a "<<a<<endl;
    }
    ~A()
    {
        
    }
};

class B 
{
    int b;
    public:
    B(int y)
    {
        b=y;
        cout<<"B class constuctor initialized"<<endl;
    }
    void dispb()
    {
        cout<<"value of b "<<b<<endl; 
    }
    ~B()
    {
        
    }
    
};

class C: public B,public A{
    int m;
    public:
    C(int x,int y,int z):A(x),B(y),m(z)
    {
        cout<<"C class constructor initialized"<<endl ;
    }
    void dispm()
    {
        cout<<"value of m "<<m<<endl;
    }
    ~C()
    {
        
    }
    
};
int main()
{
    C obj(20,30,40);
    
    obj.dispa();
    obj.dispb();
    obj.dispm();
}

