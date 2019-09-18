#include<iostream>
using namespace std;
void swap();
main()
{
	swap();
}
void swap()
{
	int  a,b,temp;
cout<<"enter a and b values";
cin>>a>>b;

temp=a;
a=b;
b=temp;
cout<<"after swapping:"<<a<<"\t"<<b;
}






