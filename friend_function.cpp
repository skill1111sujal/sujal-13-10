#include<iostream>
using namespace std;
class num
{
    int r,i;
    public:
    void setdata(int x,int y)
    {
        r=x;
        i=y;
    }
    void getdata()
    {
        cout<<"num is :"<<r<<"r"<<i<<"i"<<endl;
    }
    friend num operater+(num ,num );
};
num operater(num a,num b)
{
    num z;
    z.r=a.r+b.r;
    z.i=a.i+b.i;
    return z;
}
int main()
{
    num a,b,c;
    a.getdata(2,5);
    b.setdata(3,9);
    a.getdata();
    b.getdata();
    c= a+b;
    c.getdata();
}



    
        
    

    
    


