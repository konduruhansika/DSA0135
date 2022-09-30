#include <iostream>
using namespace std;
class Sum_and_mul
{
public:
int c=10;
public :
void sum_1(int a, int b)
{
int result;
result=a+c;
cout<<" The result for sum of a and c is: "<<result<<endl;
}
void mul_1(int a,int b)
{
int result;
result=a*c;
cout<<" The result for multiplication of a and c is: "<<result<<endl;
}
};
class Mul_and_sum : public Sum_and_mul
{
int d=20;
public:
void sum_2()
{
int result;
result=c+d;
cout<<" The result for sum of c and d is: "<<result<<endl;
}
void mul_2()
{
int result;
result=c*d;
cout<<" The result for multiplication of c and d is: "<<result<<endl;
}
};
int main()
{
int a,b;
cout<<" Enter value for a: ";
cin>>a;
cout<<" Enter value for b: ";
cin>>b;
Sum_and_mul sam;
Mul_and_sum mas;
sam.sum_1(a,b);
sam.mul_1(a,b);
mas.sum_1(a,b);
mas.mul_1(a,b);
mas.sum_2();
mas.mul_2();
return 0;
}
