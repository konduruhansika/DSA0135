#include<iostream>
using namespace std;
int main()
{
	int c,n,num,digit,rev=0;
	string a,b;
	cout<<"\n1.string\n2.number";
	cout<<"\n enter the choice=>";
	cin>>c;
	switch(c)
      {
        case 1:
            cout<<"ENTER THE STRING => ";
            cin>>a;
            for(int i=a.size()-1;i>=0;i--)
            {
            b+=a[i];
            }
            if(a==b)
            cout<<"entered word is a palindrome";
            else
            cout<<"entered word is not a palindrome";
            break;
        case 2:
            cout << "Enter a positive number: ";
            cin >> num;
            n = num;
            do
            {
               digit = num % 10;
               rev = (rev * 10) + digit;
               num = num / 10;
            } 
	        while (num != 0);
               cout << " The reverse of the number is: " << rev << endl;
            if (n == rev)
              cout << " The number is a palindrome.";
            else
              cout << " The number is not a palindrome.";
              break;
        default:
        	cout<<"invalid input";
return 0;
}
}
