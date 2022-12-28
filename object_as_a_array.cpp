#include<iostream>
using namespace std;
class Test
{
    int r,i;
    public:
    void setdata()
    {
        cout<<"Enter real num :";
        cin>>r;
        cout<<"Enter img num :";
        cin>>i;
    }
    void getdata()
    {
        cout<<"num is :"<<r<<"+"<<i<<"i"<<endl;
    }
};
int main()
{
    Test a[5];
    int i;
    for(i=0;i<2;i++)
    {
        cout<<"Enter defult is :"<<i+1<<endl;
        a[i].setdata();
        cout<<endl;

    }
    cout<<"Printing num :"<<endl<<endl;
    for(i=0;i<2;i++)
    {
        cout<<"Defult is :"<<i+1<<endl;
        a[i].getdata();
        cout<<endl;
    }
}