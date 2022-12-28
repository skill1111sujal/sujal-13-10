#include<iostream>
using namespace std;
int main()
{
    int arr[5],ar[5];
    int i;
for(i=0;i<=5;i++)
{
    cout<<"a ="<<i;
    cin>>arr[i];
}
cout<<"\n";
for(i=0;i<5;i++)
{
    cout<<"b ="<<i;
    cin>>ar[i];
}
for(i=0;i<5;i++)
{
    cout<<"\n "<<arr[i];
    cout<<"\t";
    cout<<"\n "<<ar[i];
}
}
