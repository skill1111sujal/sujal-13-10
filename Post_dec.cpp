#include<iostream>
using namespace std ;
class Num
{
    int real , img ;     
    public :
    void setdata(int , int);
    void getdata()
    {
        cout<<"Num is ="<<real<<"+"<<img<<"i"<<endl;
    }
    Num operator -- (int)
    {
        Num t;
        t.real=real--;
        t.img=img--;
        return t;
    }
};
void Num :: setdata(int r , int i )
{
    real = r ;
    img = i ;
}
int main()
{
    Num a,b;
    a.setdata(5,6);
    a.getdata();
    cout<<"After increament "<<endl;
    a--;
    b=a;
    b.getdata();
}