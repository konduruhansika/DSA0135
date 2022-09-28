#include<iostream>
using namespace std;
int main()
{
	float a,b,c;
	cout<<"enter the values of a,b,c:";
	cin>>a>>b>>c;
	if(a==b || b==c)
	{
		cout<<"the given numbers are equal";
	}
	else if(a>=b && a>=c)
	{
		cout<<"a id greatest"<<a;
		cout<<endl;
	}
	else if(b>=a && b>=c)
	{
		cout<<"b is greater"<<b;
		cout<<endl;
	}
	else
	{
		cout<<"c is greater"<<c;
		cout<<endl;
	}
	return 0;
}
