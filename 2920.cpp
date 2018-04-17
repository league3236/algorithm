#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <iostream>

using namespace std;


int main() {
	int arr[8];
	bool asc,dec,mix = true;
	for (int i=0; i < 8; i++) {
		scanf("%d", &arr[i]);
		if (arr[i] != i + 1)
			asc = false;
	}
	int j = 8;
	for (int i = 0; i < 8; i++){
		if (arr[i] != j){
			dec = false;
			break;
		}
		j--;
	}
	if (asc) {
		printf("ascending\n");
	}
	else if (dec) {
		printf("descending\n");
	}
	else {
		printf("mixed\n");
	}

	return 0;
}
