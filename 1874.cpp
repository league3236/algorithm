
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

	//queue�� ���ϴ� integer �ϳ��� ����
	for (int i = 0; i < total; i++) {
		int data;
		scanf("%d", &data);
		total_que.push(data);
	}

	//vector�� ���� �������� �ֱ�
	for (int i = 1; i <= total; i++) {
		increase_vec.push_back(i);
	}
	
	//ó���� �־��� ���ڷ� stack ä���
	for (int i = 0; i < total_que.front(); i++) {
		find_stack.push(increase_vec[increase_vec_index++]);
		answer_queue.push_back('+');
	}
	total_que.pop();

	//ó�� �־��� ���ڸ� stack���� ����
	find_stack.pop();
	answer_queue.push_back('-');
	while(total_que.size()) {
		//����ϰ� �ϴ� ���� �ϳ��� ����.
		int int_one = total_que.front();

		//���� stack�� ��� �ִٸ� ä���ش�.
		if (find_stack.size() == 0) {
			find_stack.push(increase_vec[increase_vec_index++]);
			answer_queue.push_back('+');
		}
		//���� ����ϰ��� �ϴ� ���� ���ÿ� �ִ� �𺸴� ������
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