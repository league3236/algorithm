//다장조는 c d e f g a b C, 총 8개 음으로 이루어져있다.
//각각 숫자 1 2 3 4 5 6 7 8 로 바꾸어진다.
//1부터 8까지 차례대로 연주한다면 ascending
//8부터 1까지 차례대로 연주한다면 descending
//아미년 mixed 인지 판별하는 프로그램을 작성하시오.
#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <iostream>
#define Lengh 8

using namespace std;

int main() {
	int arr[Lengh];
	int result = 0;
	enum { asc = 0, des, mix }; // asc=0, des=asc+1, mix=des+1

	for (int i = 0; i < Lengh; i++) {
		scanf("%d", &arr[i]);
	}

	if ((arr[1] - arr[0]) == 1)
		result = asc;
	else if ((arr[1] - arr[0]) == -1)
		result = des;
	else
		result = mix;

	for (int i = 1; i < Lengh; i++) {
		if (((arr[1] - arr[0]) == 1) && result == asc)
			continue;
		else if (((arr[1] - arr[0]) == -1 && result == des))
			continue;

		result = mix;
		break;
	}

	if (result == asc) printf("ascending\n");
	else if (result == des) printf("descending\n");
	else
		printf("mixed\n");
	return 0;
}
