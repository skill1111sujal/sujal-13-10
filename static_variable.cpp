#include<iostream>
using namespace std;
class Box
{
    int l,b,h;
    public:
    static int count;
    void setdata(int x, int y, int z)
    {
        l = x, b = y , h = z;
        ++count;

    }
    int getdata()
    {
        return l*b*h;

    }
};
int Box :: count = 0;
int main()
{
    cout<<"Initial stage: "<<Box :: count<<endl;
    Box a,b;
    a.setdata(2,2,2);
    b.setdata(3,3,3);
    cout<<"volume of Box A is:"<<a.getdata()<<endl;
    cout<<"volume of Box B is: "<<b.getdata()<<endl;
    cout<<"final stage: "<<Box :: count<<endl;
}