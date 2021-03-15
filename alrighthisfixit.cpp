#include <iostream>

int main() {
  std::cout << "Hello World!";
  return 0;
}
----
#include <iostream>
using namespace std;

int main() {
  cout << "Hello World!";
  return 0;
}
-------
#include <iostream>
using namespace std;

int main() {
  cout << "Hello World!";
  cout << "I am learning C++";
  return 0;
}
---------
#include <iostream>
using namespace std;

int main() {
  cout << "Hello World! \n";
  cout << "I am learning C++";
  return 0;
}
------------
#include <iostream>
using namespace std;

int main() {
  cout << "Hello World! \n\n";
  cout << "I am learning C++";
  return 0;
}
-----------
#include <iostream>
using namespace std;

int main() {
  cout << "Hello World!" << endl;
  cout << "I am learning C++";
  return 0;
}
--------------
/* The code below will print the words Hello World!
to the screen, and it is amazing */
cout << "Hello World!";
--------------
int myNum = 15;
cout << myNum;
-----------
int x; 
cout << "25: "; // Type a number and press enter
cin >> x; // Get user input from the keyboard
cout << "Your number is: " << x; // Display the input value
-----------
int x, y;
int sum;
cout << "Type a number: ";
cin >> x;
cout << "Type another number: ";
cin >> y;
sum = x + y;
cout << "Sum is: " << sum;
--------
int x, y;
int sum
cout << "Type it. Please,"
cin >> x;
