#include <iostream>
using namespace std;

int main()
{

  char a = '~';
  char b = '&';
  char c = '%';
  char d = 'A';

/*  Output Needed
  "ASCII Value of ~ Is 126"
  "ASCII Value of & Is 38"
  "ASCII Value of % Is 37"
  "ASCII Value of A Is 65" */


  cout << "ASCII Value of " << a << " IS " << int(a) << endl;
  cout << "ASCII Value of " << b << " IS " << int(b) << endl;
  cout << "ASCII Value of " << c << " IS " << int(c) << endl;
  cout << "ASCII Value of " << d << " IS " << int(d) << endl;

  return 0;
}
