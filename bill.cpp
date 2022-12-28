#include<iostream>
using namespace std;
int main()
{
    int rate,qty,amt,dis,billamt,gst,netbill;

    cout<<"Enter a rate :";
    cin>>rate;
    cout<<"Enter a qty :";
    cin>>qty;

    amt=rate*qty;
    dis=amt*0.05;
    billamt=amt-dis;
    gst=billamt*0.18;
    netbill=billamt+gst;

    cout<<"\n rate \tqty \tamt \tdis \tbillamt \tgst \tnetbill\n"<<rate<<"\t"<<qty<<"\t"<<amt<<"\t"<<dis<<"\t"<<billamt<<"\t\t"<<gst<<"\t"<<netbill;

}
