// Write a function that returns a pointer to the maximum value of an array of double's.  If the array is empty, return NULL.

#include<iostream>
using namespace std;

//Function for giving pointer of the max value
double *max (double arr[],int n){
	double mx = arr [0];
	for (int i=0;i<n;i++){
	if (mx < arr[i]){mx = arr[i];}}
	double *yay;
	for (int j=0;j<n;j++){if(arr[j]==mx){yay = &arr[j];}}
return yay;
}

// Function for printing the pointer
void yo(double arr[], int n){

	double *x = max(arr,n);
	cout << "The address to the maximum value of array is " << x << endl;
}

// The main part
int main(){
int n;
cout << "How long is your array?" << endl;
cin >> n;

// NULL Case
if (n==0){cout << "NULL" << endl;
return 0;
}

// Otherwise
double arr[n];
cout << "Elements of your array plz." << endl;
for (int i=0;i<n;i++){cin >> arr[i];}

yo(arr,n);
return 0;
}

	
