#include <iostream>
using namespace std;

int main()
{
/*========== Test Case 1 ==========
"No Age Is Not Ok"
"No Points Is Not Ok"*/
int age = 18;
int points = 450;
cout <<"\n========== Case 1 ========== \n";
cout << ((age>18)?"Yes Age Is Ok":"No Age Is Not Ok")<<endl;
cout << ((points>500)?"Yes Points IS Ok":"No Points IS Not Ok") << endl;

/*========== Test Case 2 ==========
"Yes Age Is Ok"
"No Points Is Not Ok"*/
 age = 20;
 points = 450;
cout <<"\n========== Case 2 ========== \n";
cout << ((age>18)?"Yes Age Is Ok":"No Age Is Not Ok")<<endl;
cout << ((points>500)?"Yes Points IS Ok":"No Points IS Not Ok") << endl;


/*========== Test Case 2 ==========
"Yes Age Is Ok"
"Yes Points Is Ok"*/
age = 20;
points = 650;
cout <<"\n========== Case 3 ========== \n";
cout << ((age>18)?"Yes Age Is Ok":"No Age Is Not Ok")<<endl;
cout << ((points>500)?"Yes Points IS Ok":"No Points IS Not Ok") << endl;

return 0;
}
