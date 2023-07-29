#include <iostream>
using namespace std;

int main()
{
  int num;
  cin >> num;

switch(num){
  case 10:
    cout<<"Case 1";
  break;

  case 19 ... 21: //range from 19 to 21 (19-20-21)
    cout<<"Case 2";
  break;

  case 29 ... 33:
    cout<<"Case 3";
  break;
  
  default:
  cout <<"Invalid Number";
}

  return 0;
}
