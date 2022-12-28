#include<iostream>
using namespace std;
class num
{
    int real,img;
    public:
    void setdata(int ,int );
    void getdata()
    {
        cout<<"num is :"<<real<<"+"<<img<<"i"<<endl;
    }
    num operator++()
    {
        num t;
        t.real= ++real;
        t.img= ++img;
        return t;
    }
};
void num::setdata(int r,int i)
{
    real=r;
    img=i;
}
int main()
{
    num a,b;
    a.setdata(2,3);
    a.getdata();
    cout<<"After increment "<<endl;
    b= ++a;
    b.getdata();

}