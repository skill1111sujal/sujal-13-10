#include<iostream>
using namespace std;
class bank
{
    int deposite,withdraw,showbalance;
    public:
    void setdata()
    {
        cout<<"Enter deposite amount :";
        cin>>deposite;
        //cout<<"Enter withdraw balance :";
       // cin>>withdraw;
    }
    int calculate()
    {
        showbalance=deposite-withdraw;
    }
    void display()
    {
         cout<<"Total balance :"<<showbalance<<endl;
    }
};
int main()
{
bank a;
    a.setdata();
    a.calculate();
    a.display();
}