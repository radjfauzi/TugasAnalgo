/*
Nama	: Muhammad Siradj Al Fauzi
NPM		: 140810170021
Kelas	: A
*/

#include <iostream>
using namespace std;

void bubbleSort (int arr[], int n){
	int i, j;
	for (i = 0; i < n; ++i){
		for (j = 0; j < n-i-1; ++j){
			if (arr[j] > arr[j+1]){
				arr[j] = arr[j]+arr[j+1];
				arr[j+1] = arr[j]-arr[j + 1];
				arr[j] = arr[j]-arr[j + 1];
			}
		}
	}	
}	
 
int main(){
	int n, i;
	cout<<"Masukkan jumlah elemen data yang ingin diurutkan: ";
	cin>>n;
 
	int arr[n];
	for(i = 0; i < n; i++){
		cout<<"Masukkan elemen ke-"<<i+1<<": ";
		cin>>arr[i];
	}
 
	bubbleSort(arr, n);
 
	cout<<"\nArray yang telah diurutkan: ";
	for (i = 0; i < n; i++){
      		cout<<" "<<arr[i];
	}
}
