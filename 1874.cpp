
#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <iostream>
#include <vector>
#include <stack>
#include <queue>

using namespace std;

int total;
int increase_vec_index = 0;
queue<int> total_que;
vector<int> increase_vec;
stack<int> find_stack;
vector<char> answer_queue;

int main() {

	scanf("%d", &total);

	//queue에 원하는 integer 하나씩 저장
	for (int i = 0; i < total; i++) {
		int data;
		scanf("%d", &data);
		total_que.push(data);
	}

	//vector에 숫자 증가시켜 넣기
	for (int i = 1; i <= total; i++) {
		increase_vec.push_back(i);
	}
	
	//처음에 주어진 숫자로 stack 채우기
	for (int i = 0; i < total_que.front(); i++) {
		find_stack.push(increase_vec[increase_vec_index++]);
		answer_queue.push_back('+');
	}
	total_que.pop();

	//처음 주어진 숫자를 stack에서 빼기
	find_stack.pop();
	answer_queue.push_back('-');
	while(total_que.size()) {
		//출력하고 하는 것을 하나씩 뺀다.
		int int_one = total_que.front();

		//만약 stack이 비어 있다면 채워준다.
		if (find_stack.size() == 0) {
			find_stack.push(increase_vec[increase_vec_index++]);
			answer_queue.push_back('+');
		}
		//만약 출력하고자 하는 놈이 스택에 있는 놈보다 작으면
		else if (int_one < find_stack.top()) {
			printf("NO\n");
			return 0;

		}
		else if (int_one == find_stack.top()) {
			find_stack.pop();
			total_que.pop();
			answer_queue.push_back('-');
		}
		else {
			find_stack.push(increase_vec[increase_vec_index++]);
			answer_queue.push_back('+');
		}

		for (int i = 0; i < answer_queue.size(); i++) {
			printf("%c\n", answer_queue[i]);
		}

		return 0;
	}

	return 0;
}