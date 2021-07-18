/* Other Types
A demonstration of other data types:

int myNum = 5;               // Integer (whole number without decimals)
double myFloatNum = 5.99;    // Floating point number (with decimals)
char myLetter = 'D';         // Character
string myText = "Hello";     // String (text)
bool myBoolean = true;       // Boolean (true or false)

Display Variables
The cout object is used together with the << operator to display variables.

To combine both text and a variable, separate them with the << operator:
*/

#include <iostream>
using namespace std;

int main() {
  int myAge = 35;
  cout << "I am " << myAge << " years old.";
  return 0;
}

/*
Add Variables Together
To add a variable to another variable, you can use the + operator:
*/

#include <iostream>
using namespace std;

int main() {
  int x = 5;
  int y = 6;
  int sum = x + y;
  cout << sum;
  return 0;
}

/* Declare Many Variables
To declare more than one variable of the same type, use a comma-separated list:

*/

#include <iostream>
using namespace std;

int main() {
  int x = 5, y = 6, z = 50;  
  cout << x + y + z;
  return 0;
}

/*C++ Identifiers
C++ Identifiers
All C++ variables must be identified with unique names.

These unique names are called identifiers.

Identifiers can be short names (like x and y) or more descriptive names (age, sum, totalVolume).

*/

#include <iostream>
using namespace std;

int main() {
  // Good name
  int minutesPerHour = 60;
  
  // OK, but not so easy to understand what m actually is
  int m = 60;
  
  cout << minutesPerHour << "\n";
  cout << m;
  return 0;
}
/*The general rules for constructing names for variables (unique identifiers) are:

Names can contain letters, digits and underscores
Names must begin with a letter or an underscore (_)
Names are case sensitive (myVar and myvar are different variables)
Names cannot contain whitespaces or special characters like !, #, %, etc.
Reserved words (like C++ keywords, such as int) cannot be used as names
*/

/*C++ Constants
Constants
When you do not want others (or yourself) to override existing variable values, use the const keyword (this will declare the variable as "constant", which means unchangeable and read-only):

*/

#include <iostream>
using namespace std;

int main() {
  const int minutesPerHour = 60;
  const float PI = 3.14;
  cout << minutesPerHour << "\n";
  cout << PI;
  return 0;
}
