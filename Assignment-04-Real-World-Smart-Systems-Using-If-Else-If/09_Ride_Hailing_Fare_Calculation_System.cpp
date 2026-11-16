#include<iostream>
using namespace std;
int main()
{
  float distance, wait, fare, final_fare;
  int night, premium, cancel;
  cout<<"Enter distance in km: ";
  cin>>distance;
  cout<<"Enter waiting time in min: ";
  cin>>wait;
  cout<<"Enter night time (1 or 0): ";
  cin>>night;
  cout<<"Enter premium member (1 or 0): ";
  cin>>premium;
  cout<<"Enter driver cancel (1 or 0): ";
  cin>>cancel;
  fare=150+distance*50+wait*10;
  if(night==1)
   {
    fare=fare+(fare*20/100);
   }
  if(premium==1)
   {
    fare=fare-(fare*10/100);
   }
  final_fare=fare;
  cout<<"Final fare = "<<final_fare<<endl;
  if(cancel==1)
   {
    cout<<"Driver penalty = 300";
   }
  return 0;
}