#include<iostream>
using namespace std;
int main()
{
    int y;

    cout<<"\n Enter any Year : ";
    cin>>y;
    if(y%400==0 || y%4==0 && y%100 !=0 )
    {
        cout<<"year is leap year ";
    }
    else
    {
        cout<<"year is not leap year ";
    }
}