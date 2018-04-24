//배열을 쓰지 않고 a,b,곱,합,곱,합,곱....해서 열번째 총덧셈 구하기

#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <iostream>
using namespace std;

int main() {
	
	int a, b, gob = 0, hab = 0, sum=0;
	scanf("%d %d", &a, &b);
	gob = a * b;
	hab = a + b;
	sum = gob + hab + a + b;
	for (int i = 5; i <= 10; i++) {
		if (i % 2 == 1) {
			gob *= hab;
		}
		else {
			hab += gob;
		}
		sum += (gob + hab);
	}
	printf("10번째 수열까지의 총합은 %d\n", sum);
	
	
	return 0;
}
