// Name: Arnab Sanyal 
// College: Lovely Professional University
// year of passing: 2023
// phone number: 8250170804
// email: arnabsanyal228@gmail.com



#include<bits/stdc++.h>
using namespace std;
int main()
{
string products[]={"Leather wallet","Umbrella","Cigerette","Honey"};
int unitprice[]={1100,900,200,100};
int gst[]={18,12,28,0};
int quantity[]={1,2,3,4};

int leatherWallet=unitprice[0]*gst[0]/100*unitprice[0];
int umbrella=unitprice[1]*gst[1]/100*unitprice[1]*quantity[1];
int cigerrete=unitprice[2]*gst[2]/100*unitprice[2]*quantity[2];
int honey=unitprice[3]*gst[3]/100*unitprice[3]*quantity[3];


cout<<"Price for Leather Wallet: "<<leatherWallet<<endl;
cout<<"price for umbrella:"<<umbrella<<endl;
cout<<"price for cigerette:"<<cigerrete<<endl;
cout<<"price for honey:"<<honey<<endl;
cout<<"Total price: "<<leatherWallet+umbrella+cigerrete+honey<<endl;
//for adding more values
// int moreValues[]={};
// int n;
// for(int i=0;i<moreValues.size();i++)
// {
//     cin n;
// }
}
