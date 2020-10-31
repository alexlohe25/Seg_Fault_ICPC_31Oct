#include <iostream>
using namespace std;
long int bubbleSort(long int arr[], long int n){
	bool flag = true;
	long int i, j;
	long int contador = 0;
	for (i=0; i< n-1 && flag; i++){
		flag = false;
		for ( j=0; j < n-1-i; j++){
			if (arr[j+1] < arr[j]){
				contador++;
				long int aux = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = aux;
				flag = true;
			}
		}
	}
	return contador;
}
int main(){
	long int n;
	cin >> n;
	long int arr[n];
	for (long int i=0; i < n; i++){
		long int valor;
		cin >> valor;
		arr[i] = valor;
	}
	cout << bubbleSort(arr,n) << endl;
	return 0;
}