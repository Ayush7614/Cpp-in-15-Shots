/* C++ Variables
Variables are containers for storing data values.

In C++, there are different types of variables (defined with different keywords), for example:

int - stores integers (whole numbers), without decimals, such as 123 or -123
double - stores floating point numbers, with decimals, such as 19.99 or -19.99
char - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes
string - stores text, such as "Hello World". String values are surrounded by double quotes
bool - stores values with two states: true or false


Declaring (Creating) Variables
To create a variable, you must specify the type and assign it a value:

Syntax
type variable = value;
Where type is one of C++ types (such as int), and variable is the name of the variable (such as x or myName). The equal sign is used to assign values to the variable.

To create a variable that should store a number, look at the following example:

Example
Create a variable called myNum of type int and assign it the value 777:
*/

#include<iostream>
using namespace std;

int main(){
	int myNum = 777;
	cout<<myNum;
	return 0;
}

/* You can also declare a variable without assigning the value, and assign the value later:

Example
*/

#include <iostream>
using namespace std;

int main() {
  int myNum;
  myNum = 777;
  cout << myNum;
  return 0;
}

/* Note that if you assign a new value to an existing variable, it will overwrite the previous value:

Example
*/


