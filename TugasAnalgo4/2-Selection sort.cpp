/*
Nama	: Muhammad Siradj Al Fauzi
NPM		: 140810170021
Kelas	: A
*/

#include <iostream>
using namespace std;

void selectionSort (int arr[], int n){
	int i, j;
	for (i = 0; i < n; ++i){
		for (j = i+1; j < n; ++j){
			if (arr[i] > arr[j]){
				arr[i] = arr[i]+arr[j];
				arr[j] = arr[i]-arr[j];
				arr[i] = arr[i]-arr[j];
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
 
	selectionSort(arr, n);

	cout<<"\nArray yang telah diurutkan: ";
	for (i = 0; i < n; i++) cout<<" "<<arr[i];
}
