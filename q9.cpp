// Write a function contains(char*, char) which returns true if the 1st parameter cstring contains the 2nd parameter char, or false otherwise.
#include<iostream>
using namespace std;
// The function
void yo(char *p,char c){
	int t;
	for (int i=0;*(p+i)!='\0';i++)
	{t = i;
		if(*(p+i)==c){break;}
	}
	if (*(p+t)!='\0'){cout << "True" << endl;}
	else cout << "False" << endl;
}

int main(){

// Asking for size
int n;
cout << "What is the size of your array?" << endl;
cin >> n;

// Forming an array
char a[n+1];
char c;
cout << "Gimme an array." << endl;
for(int i=0;i<n;i++){cin >> a[i];}

// Asking for wanted char
cout << "What character do you wish to find in the array?" << endl;
cin >> c;
char *p = &a[0];

// Apply yo
yo(p,c);
return 0;
}
