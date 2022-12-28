#include<iostream>
using namespace std;
int main()
{
    int i,num,sum=0;

    cout<<"enter any number";
    cin>>num;

    for(i=1;i<=num;i++)
    {
        cout<<"\n "<<i;
        sum=sum+i;
    }
    cout<<"\n the sum of total number  :"<<sum;

}