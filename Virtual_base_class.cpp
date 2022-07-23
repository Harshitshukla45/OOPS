#include <iostream>
using namespace std;
class A 
{
    int a;
    public:
    void dispa(int x)
    {   
        a=x;
        cout<<"value of a "<<a<<endl;
    }

};

class B : virtual public A
{
    int b;
    public:
    void dispb(int y)
    {   
         b=y;
        cout<<"value of b "<<b<<endl; 
    }
    
    
};

class C: virtual public A{
    int c;
    public:
    void dispc(int z)
    {   
        c=z;
        cout<<"value of c "<<c<<endl;
    }
    
};

class D : public C,public B
{
    int d;
    public:
    void dispd(int z)
    {   
        d=z;
        cout<<"value of d "<<d<<endl; 
    }
    
    
};

int main()
{   
    
    D obj;
    
    obj.dispa(78);
    obj.dispb(45);
    obj.dispc(63);
    obj.dispd(85);
}
