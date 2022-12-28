#include <iostream>
using namespace std;
class factorial
{
    public:
    int number,fac=1;
    void setdata()
    {
        cout<<"enter number";
        cin>>number;
    }
};
class fact : public factorial
{
    public:
    void cal()
    {
        if(number<0)
        {
            cout<<"Eroor !!!! negative number";
        }
        else
        {
            for (int i = 1; i <= number; ++i)
            {
                fac = fac * i;
            }
            
        }
    }
        void getdata()
        {
            cout<<"number is :-"<<fac<<endl;
        }
};
int main()
{  
    fact a;
    a.setdata();
    a.cal();
    a.getdata();
}
