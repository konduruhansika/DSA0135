#include <iostream>

using namespace std;

class Average{

   public:

   static float calcAverate(float x, float y, float z){

       return (x + y + z) / 3;

   }

};

int main(){

   cout<<"Enter three numbers: ";

   float x, y,z;

   cin>>x;

   cin>>y;

   cin>>z;

   cout<<"The average is: "<<Average::calcAverate(x,y,z)<<endl;

   return 0;

}
