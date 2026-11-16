#include<iostream>
using namespace std;
int main()
{
float s1, s2, s3, s4, s5, total, per;
cout<<"Enter marks of 5 subjects: ";
cin>>s1>>s2>>s3>>s4>>s5;
total=s1+s2+s3+s4+s5;
per=total*100/500;
if(s1<40 || s2<40 || s3<40 || s4<40 || s5<40)
{
cout<<"Fail"<<endl;
}
else if(per<50)
{
cout<<"Fail, percentage less than 50"<<endl;
}
else
{
cout<<"Pass"<<endl;
cout<<"Percentage = "<<per<<endl;
if(per>=85)
{
cout<<"Gold Medal";
}
else if(per>=75 && per<=84)
{
cout<<"Silver Medal";
}
else if(per>=65 && per<=74)
{
cout<<"Merit Scholarship";
}
else
{
cout<<"Degree qualified";
}
}
return 0;
}