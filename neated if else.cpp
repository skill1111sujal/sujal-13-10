#include<iostream>
using namespace std;
int main()
{
    int A,B,C;

    cout<<"Enter A:";
    cin>>A;
    cout<<"enter B:";
    cin>>B;
    cout<<"Enter C:";
    cin>>C;

    if(A>B && A>C)
    {
        cout<<"A is large number ";
    }
    else
    {
        if(B>C)
        {
            cout<<"B is larger number ";

        }
        else
        {
            cout<<"C is larger number ";
        }
    }






    }