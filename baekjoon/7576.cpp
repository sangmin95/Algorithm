#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <queue>

using namespace std;
int M, N, cnt_rare = 0, cnt_wellDone = 0, cnt_empty = 0, cnt_day = 0;
int **Graph;

void init();
void search_4directions(pair<int, int> point);
void print_result();
void find_wellDone();
void search_4directions(pair<int, int> point);
bool goTomorrow();

queue<pair<int, int>> q;

int main()
{
	init();
	find_wellDone();
	while (!goTomorrow()) {
	}
	print_result();
	return 0;
}

void print_result() {
	if (cnt_rare == 0) {
		printf("%d\n", cnt_day);
	}
	else {
		printf("%d\n", -1);
	}
}

void init() {
	int flag;

	scanf("%d %d%*c", &M, &N);

	Graph = (int**)malloc(sizeof(int*)*N);
	for (int i = 0; i < N; i++) {
		Graph[i] = (int*)malloc(sizeof(int)*M);
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {

			scanf("%d", &flag);
			if (flag == 0) cnt_rare++;
			if (flag == 1) cnt_wellDone++;
			if (flag == -1) cnt_empty++;

			Graph[i][j] = flag;
		}
		scanf("%*c");
	}
}

void find_wellDone() {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (Graph[i][j] == 1) {
				q.push(make_pair(i, j));
			}
		}
	}
}

void search_4directions(pair<int, int> point) {

	int isWelldone;

	//Up
	if (point.first > 0) {
		isWelldone = Graph[point.first - 1][point.second];
		if (isWelldone == 0) {
			q.push(make_pair(point.first - 1, point.second));

			Graph[point.first-1][point.second] = 1;
			cnt_rare--;
		}
	}

	//Down
	if (point.first < N-1) {
		isWelldone = Graph[point.first + 1][point.second];
		if (isWelldone == 0) {
			q.push(make_pair(point.first + 1, point.second));

			Graph[point.first+1][point.second] = 1;
			cnt_rare--;
		}
	}

	//Left
	if (point.second > 0) {
		isWelldone = Graph[point.first][point.second - 1];
		if (isWelldone == 0) {
			q.push(make_pair(point.first, point.second - 1));

			Graph[point.first][point.second-1] = 1;
			cnt_rare--;
		}
	}

	//Right
	if (point.second < M-1) {
		isWelldone = Graph[point.first][point.second + 1];
		if (isWelldone == 0) {
			q.push(make_pair(point.first, point.second + 1));

			Graph[point.first][point.second + 1] = 1;
			cnt_rare--;
		}
	}

}

bool goTomorrow() {

	int qSize = q.size();
	pair<int, int> point;

	if (cnt_rare == 0 || qSize == 0) {
		return true;
	}

	while (qSize--) {
		point = q.front();
		q.pop();
		search_4directions(point);
	}
	cnt_day++;
	return false;
}
