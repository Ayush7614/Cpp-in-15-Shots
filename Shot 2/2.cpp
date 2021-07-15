/* C++ Output (Print Text)
The cout object, together with the << operator, is used to output values/print text:

Example 
*/

#include <iostream>
using namespace std;

int main() {
  cout << "Hello World!";
  return 0;
}

/* You can add as many cout objects as you want. However, note that it does not insert a new line at the end of the output:

Example
#include <iostream>
using namespace std;

int main() {
  cout << "Hello World!";
  cout << "I am learning C++";
  return 0;
}

*/

/* But this will give output is - Hello World!I am learning C++

This will give output in same line 

*/

/* New Lines
To insert a new line, you can use the \n character:

*/

Example
#include<iostream>
using namespace std;

int main(){
	cout<<"Ayush Kumar! \n";
	cout<<"A software Developer!";
	return 0;
}

/* But this will give output is - Ayush Kumar!
A software Developer!

This will give output in differnt lines because we use \n sign or character for this

*/

/*Two \n characters after each other will create a blank line if you want more gap then use double \n character
*/
Example

#include<iostream>
using namespace std;

int main(){
	cout<<"Ayush Kumar! \n\n";
	cout<<"A software Developer!";
	return 0;
}

*/ Output 

Ayush Kumar!

A software Developer!
  
*/  

/* Another way to insert a new line, is with the endl manipulator:

*/

/* Both \n and endl are used to break lines. However, \n is used more often and is the preferred way.

*/

#include<iostream>
using namespace std;

int main(){
	cout << "Hello World!" << endl;
  cout<<"Ayush Kumar!\n";
	cout<<"A software Developer!";
	return 0;
}

/* Output 

Hello World!
Ayush Kumar!
A software Developer!

*/
