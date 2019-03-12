#include<iostream>
using namespace std;

main(){
	
	int angka, n, max;
	cout << "Masukan angka : "; cin >> n;
	cout << endl;
	
	int i = 1;
	while (i <= n){
		cout << "Masukan Angka ke-"<< i << " : "; cin >> angka;
		
		if (i == 1){
			max = angka;
		}
		else if (max < angka){
			max = angka;
		}
	i++;	
	}
	
	cout << endl;
	cout << "Nilai maksimum: " << max;
	
}
