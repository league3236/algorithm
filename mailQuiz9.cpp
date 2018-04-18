
#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <iostream>
#define Length 3

using namespace std;

int main() {
	int arr1[Length];
	int arr2[Length];
	for (int i = 0; i < Length; i++) {
		scanf("%d", &arr1[i]);
	}
	int j = 0;
	int k = Length-1;
	for (int i = 0; i < Length; i++) {
		if(arr1[i]!=0){
			arr2[j] = arr1[i];
			j++;
		}
		else{
			arr2[k] = 0;
			k--;
		}
	}
	for (int i = 0; i < Length; i++) {
		printf("%d ", arr2[i]);
	}
	printf("\n");
	
	return 0;
}
