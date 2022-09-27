#include<iostream>
using namespace std;
int main()
{
	try
	{
	int n,m;
	cout<<"enter the number:";
	cin>>n;
	if(n>0)
	{
	if(n<=18)
	{
		m=18-n;
		cout<<"you are not eligible to vote,you are allowed to vote after"<<m<<"years";
	}
	else if(n>18)
	{
		cout<<"you are eligible to vote";
	}
	}
	else
	{
		throw(n);
	}
	}
	catch(int n)
	{
	cout<<"invalid input";
	}
}
