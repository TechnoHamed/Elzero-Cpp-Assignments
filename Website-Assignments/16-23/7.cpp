#include <iostream>
using namespace std;

int main()
{
  int a = 1;
  int b = 13;
  int c = 17;
  int d = 70;

// Output Needed: "EWS"

/* for get ASCII code for "EWS"  E=69 W=87  S=83
  cout << int('E') << endl;
  cout << int('W') << endl;
  cout << int('S') << endl; */

// d-a = 70-1 = 69 == E || d+c = 70+17 = 87 == W || d+b = 13+70 = 83 == S 

  cout << char(d - a) << char(d+c) << char(d+b) << endl;

  return 0;
}
