// Write a function myStrLen(char*) which returns the length of the parameter cstring.  Write the function without using the C++ function strlen.
#include<iostream>
#include<cstring>
using namespace std;

// The req func
int yo(char *p){
int count;
// Checking for \0(null character)
for(*p;*p!='\0';p++){count++;}
return count;
}

// The main part
int main(){
cout << "Gimme a sentence bro." << endl;
char c[100];
cin.getline (c,100); // Getline gives you input in sequence.
char *p = c;
int r = yo(p);
cout << "length of string = " << r <<endl;

return 0;
}


