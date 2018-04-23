//String 이 주어지면, 중복된 char가 없는 가장 긴 서브스트링의 길이를 찾으세요

#define _CRT_SECURE_NO_WARNINGS
#define max_len 100
#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

char Input[max_len];
vector<int> q_Input;
bool equals = false;
int substring = 0;

int main() {
	
	cin >> Input;
	
	q_Input.push_back(Input[0]);
	
	for (int i = 0; i < strlen(Input); i++) {
		for(int j=0;j<q_Input.size();j++){
			if (q_Input.at(j) == Input[i]) {
				equals = true;
			}
		}
		if (equals == true) {
			q_Input.clear();
		}
		else {
			q_Input.push_back(Input[i]);
		}
		if (substring < q_Input.size())
			substring = q_Input.size();
		equals = false;
	}
	
	printf("%d\n", substring);
	
	return 0;
}
