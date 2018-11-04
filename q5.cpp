// Write a piece of code which prints the characters in a cstring in a reverse order.
#include<iostream>
using namespace std;


int main(){

char s[10] = "abcde";
char* cptr;

// WRITE YOUR CODE HERE
cptr = s;
cout << "The reverse is ";
for(int i=10;i>=0;i--){cout << *(cptr+i);}
cout << endl;
return 0;
}
