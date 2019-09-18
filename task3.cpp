#include<iostream>

using namespace std;

main()

{

int y;

cout<<"enter year";

cin>>y;

if(y%4==0&y%10!=0||y%400==0)

cout<<y<<"is leap year";

else

cout<<y<<"is not a leap year";

}
