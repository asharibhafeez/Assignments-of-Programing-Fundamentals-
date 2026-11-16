#include<iostream>
using namespace std;
int main()
{
float damage, payable;
int valid_ins, expire, valid_lic, alcohol, responsible;
cout<<"Enter valid insurance (1 or 0): ";
cin>>valid_ins;
cout<<"Enter policy expire (1 or 0): ";
cin>>expire;
cout<<"Enter valid licence (1 or 0): ";
cin>>valid_lic;
cout<<"Enter alcohol (1 or 0): ";
cin>>alcohol;
cout<<"Enter damage amount: ";
cin>>damage;
cout<<"Enter driver responsible (1 or 0): ";
cin>>responsible;
if(valid_ins==0 || expire==1 || valid_lic==0 || alcohol==1)
{
cout<<"Claim rejected";
}
else
{
if(damage<20000)
{
cout<<"Claim approved without inspection"<<endl;
payable=damage;
}
else if(damage>=20000 && damage<=200000)
{
cout<<"Require physical inspection"<<endl;
payable=damage;
}
else
{
cout<<"Require manager approval"<<endl;
payable=damage;
}
if(responsible==1)
{
payable=payable-(payable*20/100);
}
cout<<"Final payable amount = "<<payable;
}
return 0;
}