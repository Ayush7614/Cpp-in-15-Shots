/*Operators are used to perform operations on variables and values.

In the example below, we use the + operator to add together two values:
*/

/*Although the + operator is often used to add together two values, like in the example above, it can also be used to add together 
a variable and a value, or a variable and another variable:
*/
/* 
C++ divides the operators into the following groups:

Arithmetic operators
Assignment operators
Comparison operators
Logical operators
*/
/*
+	Addition	Adds together two values	x + y	
-	Subtraction	Subtracts one value from another	x - y	
*	Multiplication	Multiplies two values	x * y	
/	Division	Divides one value by another	x / y	
%	Modulus	Returns the division remainder	x % y	
++	Increment	Increases the value of a variable by 1	++x	
--	Decrement	Decreases the value of a variable by 1	--x
*/

/* Increases the value of a variable by 1

#include <iostream>
using namespace std;

int main() {
  int x = 5;
  ++x;
  cout << x;
  return 0;
}
*/

/* Decreases the value of a variable by 1
#include <iostream>
using namespace std;

int main() {
  int x = 5;
  --x;
  cout << x;
  return 0;
}
*/

/* Returns the division remainder
#include <iostream>
using namespace std;

int main() {
  int x = 5;
  int y = 2;
  cout << x % y;
  return 0;
}
*/
