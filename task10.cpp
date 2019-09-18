 #include<iostream>
 #include<cstring>
 using namespace std;
 
int main()
{
	char s[30];
	cout<<"enter the string:";
	cin>>s;
	for(int i=0;i<=strlen(s);i++)
	{
		if(s[i]>65&&s[i]<92)
		{
			s[i]=s[i]+32;
		}
	}
	cout<<"After converstion:"<<s;
}
