#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <queue>
using namespace std;

int N, M, V;
int mat[1001][1001];
int vt[1001];

void dfs(int v);
void bfs(int v);

int main() {
	scanf("%d %d %d", &N, &M, &V);

	for (int i = 0; i < M; i++) {
		int row, col;
		scanf("%d %d",&row,&col);
		mat[row][col] = mat[col][row] = 1;
	}
	dfs(V);
	puts("");
	bfs(V);
	return 0;
}

void dfs(int v) {
	printf("%d ", v);
	vt[v] = 1;
	for (int i = 1; i <= N; i++) {
		if (mat[v][i] && !vt[i]) {
			dfs(i);
		}
	}
}
void bfs(int v) {
	queue<int> q;
	q.push(v);
	vt[v] = 2;
	while (!q.empty()) {
		int v = q.front();
		printf("%d", v);
		q.pop();
		for (int i = 1; i <= N; ++i) {
			if (mat[v][i] && vt[i] != 2) {
				vt[i] = 2;
				q.push(i);
			}
		}
	}
}