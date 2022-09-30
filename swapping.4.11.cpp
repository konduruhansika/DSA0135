#include<iostream>
using namespace std;
int main()
{
    int a,b,temp=0;
    cout<<"Enter the two variable"<<endl;
    cin>>a>>b;
    cout<<"Value before swapping"<<endl;
    cout<<"a = "<<a<<"\t"<<"b = "<<b<<endl;
    a = a + b;
    b = a - b;
    a = a - b;
    cout<<"Value after swapping"<<endl;
    cout<<"a = "<<a<<"\t"<<"b = "<<b<<endl;
    return 0;
}
