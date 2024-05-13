#include <stdio.h>


void printArr(long long arr[], int arrLength){
	for(int i = 0; i < arrLength; i++){
		printf("%lld ", arr[i]);
	}
	printf("\n");
}

void BubleSort(long long arr[], int arrLength){
	for(int i = 0; i < arrLength - 1; i++){
		printf("Buoc %d: ", i + 1);
		for(int j = 0; j < arrLength - i - 1; j++){
			if(arr[j] > arr[j + 1]){
				long long temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}	
		}
		printArr(arr, arrLength);
	}	
}
int main() {
	int n;
	scanf("%d", &n);
	long long arr[n];
	for(int i = 0; i < n; i++){
		scanf("%lld", &arr[i]);
	}
	int arrLength = sizeof(arr) / sizeof(arr[0]); // lay chieu dai cua mang
	BubleSort(arr, arrLength);
	return 0;
}
