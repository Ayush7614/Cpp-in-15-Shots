/* C++ Strings
Strings are used for storing text.

A string variable contains a collection of characters surrounded by double quotes:
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
  string greeting = "Hello";
  cout << greeting;
  return 0;
}

/* C++ String Concatenation
String Concatenation
The + operator can be used between strings to add them together to make a new string. This is called concatenation:
*/

#include <iostream>
#include <string>
using namespace std;
 
int main () {
  string firstName = "Ayush";
  string lastname = "Kumar";
  string fullname = firstname + lastname;
  cout << fullname;
  return 0;
}

/* In the example above, we added a space after firstName to create a space between John and Doe on output. However, you could also add a space with quotes (" " or ' '):*/

#include<iostream>
#include<string>
using namespace std;
int main(){
  string firstname = "Ayush";
  string lastname = "Kumar";
  string fullname = firstname + " " +lastname;
  cout << fullname;
  return 0;
}  
  
/* Append function
A string in C++ is actually an object, which contain functions that can perform certain operations on strings. For example, you can also concatenate strings with the append() function:*/
include<iostream>
#include<string>
using namespace std;
int main(){
	string firstname = "Ayush";
	string lastname = "Kumar";
	string fullname = firstname.append(lastname);
	cout << fullname;
	return 0;
}
