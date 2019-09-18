#include<iostream>
using namespace std;
int main()
{
int a[10],sum=0;
cout<<"enter 10 elements";
for(int i=0;i<10;i++)
{
cin>>a[i];
sum=sum+a[i];
}
cout<<"sum of elements is"<<sum;
  return(0);
}
