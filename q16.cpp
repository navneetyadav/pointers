// We want to show string repeatedly by shifting top character of string from right to left.

#include <iostream>
using namespace std;

int main()
{
char str[20];

cout << "Input about 10 characters of string\n";
cin >> str;

// Pointer variable refers to address of string 
char *p = &str[0];

// Show string by shifting last character of string to left

// Finding the last character
	int k;
	for(k=0;k<=20;k++){if(*(p+k)=='\0')
				{break;}
			   }

//Loop to count the rows

	for(int i=0;i<=10;i++)
	{
        //Loop to print the values
        for(int j=(k-i);j<=10;j++)
        {
            cout<<*(p+j);
        }
        cout<<endl;//change the row
    }
    return 0;
}
