#include <iostream>
using namespace std;
int bubbleSort(int arr[], int n){
	bool flag = true;
	int i, j;
	int contador = 0;
	for (i=0; i< n-1 && flag; i++){
		flag = false;
		for ( j=0; j < n-1-i; j++){
			if (arr[j+1] < arr[j]){
				contador++;
				int aux = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = aux;
				flag = true;
			}
		}
	}
	return contador;
}
int main(){
	int n;
	cin >> n;
	int arr[n];
	for (int i=0; i < n; i++){
		int valor;
		cin >> valor;
		arr[i] = valor;
	}
	cout << bubbleSort(arr,n) << endl;
	return 0;
}