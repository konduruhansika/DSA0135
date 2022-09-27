#include<iostream>
using namespace std;
int main()
{
	int n,rows,columns;
	cout<<"enter the number of rows:";
	cin>>n;
	for(rows=1;rows<=n;rows++){
	for(columns=1;columns<=rows;columns++){
	cout<<rows<<" ";
	}
	cout<<"\n";
	}
	return 0;
}

