#include <iostream>
using namespace std;

class Student
{
  int rollNo;
  long phoneNo;
  string address;

public:
  void setData(int r, long ph, string add)
  {
    rollNo = r;
    phoneNo = ph;
    address = add;
  }

  void getData()
  {
    cout << "The roll no. of the student is " << rollNo << endl;
    cout << "The phone no of the student is " << phoneNo << endl;
    cout << "the address of the student is " << address << endl;
  }
};

int main(int argc, char const *argv[])
{
  Student sam, john;
  sam.setData(34, 9573555955, "b-64 dda flats rohtak pkt3");
  sam.getData();
  john.setData(67, 9574565955, "paschim vihar");
  john.getData();
  return 0;
}
