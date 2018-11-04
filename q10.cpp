// Write a function revString(char*) which reverses the parameter cstring.  The function returns nothing.  You may use C++ string handling functions in <cstring> in the function if you wish.
#include<iostream>
#include<cstring>
using namespace std;

void revString(char *p)
{
  // WRITE YOUR CODE HERE
  cout << "The reverse is ";
  for(int i=10;i>=0;i--){cout << *(p+i);}
  cout << endl;
}

int main()
{
  char s[10] = "abcde";
  revString(s);  // call the function
  return 0;
}

