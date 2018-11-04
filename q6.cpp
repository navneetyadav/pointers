//Write a function countEven(int*, int) which receives an integer array and its size, and returns the number of even numbers in the array. 
#include<iostream>
using namespace std;

// Function to count even numbers
int countEven(int *p, int n){
int curr = 0;
for(int i=0;i<n;i++){
	if ((*(p+i)%2)==0){curr++;}}
return curr;
}

// The main part
int main(){
int n;
cout << "Today we are going to find out how many even numbers are present in an array." << endl;
cout << "How many numbers is your array going to have?" << endl;
cin >> n;
cout << "Plz type the numbers for the array." << endl;
int arr[n];
int *p = &arr[n];

for(int i = 0;i<n;i++){cin >> arr[i];}

cout << "There are " << countEven(arr,n) << " even numbers in the array." << endl;
return 0;
}




