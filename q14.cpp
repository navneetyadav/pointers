//  [STRING] Create a string and store your name in it. Use a loop to print string character by character using the normal index method as well as the pointer method. 

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "How long is your name?" << endl;
    cin >> n;
    char a[n];
    cout << "Enter your name(One word only)." << endl;
    cin >> a;
    
    //using the normal index method
    cout << "using normal index method" << endl;
    int i;
    for(i=0;i<n;i++){cout << a[i];} 
    cout<<endl;
    
    char *p;
    p = a; // for string, only this declaration will store its base address 
    
    //using the pointer method
     cout<<" using pointer method"<<endl;
     while(*p!='\0'){
        cout<<*p; 
        p++;}
     cout << endl;
return 0;
}

