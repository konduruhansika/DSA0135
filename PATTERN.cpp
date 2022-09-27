#include<iostream>
using namespace std;
int main()
{
    int rows,i,j,k;
    cout << "Enter the number of rows : ";
    cin >> rows;
    for(i=0;i<rows;i++){
    int val=1;
    for(j=1; j<(rows-i);j++){
    cout << " ";
    }
    for(k=0; k<=i;k++){
    cout << " " << val;
    val=val*(i - k)/(k + 1);
    }
    cout << endl << endl;
    }
    cout << endl;
    return 0;
}
