#include<iostream>
using namespace std;
main()
{
	int d,y,x,w;
	cout<<"enter the number of days:";
	cin>>d;
	y=d/365;
	x=d%365;
	w=x/7;
	d=x%7;
	cout<<"\nyears:"<<y;
	cout<<"\nweeks:"<<w;
	cout<<"\ndays:"<<d;	
}
