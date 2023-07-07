#include <iostream>
using namespace std;

int main()
{

  int a = 69;
  int b = 108;
  int c = 122;
  int d = 101;
  int e = 114;
  int f = 111;

  /* Output Needed
  "Character Of This ASCII Value 69 Is E"
  "Character Of This ASCII Value 108 Is l"
  "Character Of This ASCII Value 122 Is z"
  "Character Of This ASCII Value 101 Is e"
  "Character Of This ASCII Value 114 Is r"
  "Character Of This ASCII Value 111 Is o"*/

  cout << "Character Of This ASCII Value " << a << " is " << char(a) << endl;
  cout << "Character Of This ASCII Value " << b << " is " << char(b) << endl;
  cout << "Character Of This ASCII Value " << c << " is " << char(c) << endl;
  cout << "Character Of This ASCII Value " << d << " is " << char(d) << endl;
  cout << "Character Of This ASCII Value " << e << " is " << char(e) << endl;
  cout << "Character Of This ASCII Value " << f << " is " << char(f) << endl;

  // Output Needed In Last Line:  "Elzero"

  cout << char(a) << char(b) << char(c) << char(d) << char(e) << char(f) << endl;

  return 0;
}
