#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <queue>

using namespace std;

int **graph, **visit;
int rowNum, colNum, bfsCount = 0;
queue<pair<int, int>> Q;

void init();
void printGraph();
void checkDirections(pair<int, int>);

int main() {

	int nowX, nowY, tryCount;

	init();
	//printGraph();
	while ((tryCount = Q.size()) > 0) {
		bfsCount++;
		while (tryCount--) {
			nowX = Q.front().second;
			nowY = Q.front().first;
			Q.pop();

			//isFinal
			if (nowY == rowNum - 1 && nowX == colNum - 1) {
				printf("%d\n", bfsCount);
				return 0;
			}
			checkDirections(make_pair(nowY, nowX));
		}
	}

	free(graph);
	free(visit);
	return 0;
}


void init() {
	char inputValue;

	scanf("%d %d%*c", &rowNum, &colNum);

	graph = (int**)malloc(sizeof(int*)*rowNum);
	visit = (int**)malloc(sizeof(int*)*rowNum);
	for (int i = 0; i < rowNum+1; i++) {
		graph[i] = (int*)malloc(sizeof(int)*(colNum+1));
		visit[i] = (int*)malloc(sizeof(int)*(colNum+1));
	}

	for (int i = 0; i < rowNum; i++) {
		for (int j = 0; j < colNum; j++) {
			scanf("%c", &inputValue);
			graph[i][j] = inputValue - '0';
			visit[i][j] = 0;
		}
		scanf("%*c");
	}

	Q.push(make_pair(0, 0)); //y,x
	visit[0][0] = 1;
}

void checkDirections(pair<int, int> point) {

	int y = point.first, x = point.second;

	//Left
	if (x > 0) {
		//can go left && not visited
		if (graph[y][x - 1] == 1 && visit[y][x - 1] == 0) {
			Q.push(make_pair(y, x - 1));
			visit[y][x - 1] = 1;
			//printf("push [%d][%d]\n", y, x - 1);
		}
	}

	//Right
	if (x < colNum - 1) {
		//can go right && not visited
		if (graph[y][x + 1] == 1 && visit[y][x + 1] == 0) {
			Q.push(make_pair(y, x + 1));
			visit[y][x + 1] = 1;
			//printf("push [%d][%d]\n", y, x + 1);
		}
	}

	//Up
	if (y > 0) {
		// can go up && not visited
		if (graph[y - 1][x] == 1 && visit[y - 1][x] == 0) {
			Q.push(make_pair(y - 1, x));
			visit[y - 1][x] = 1;
			//printf("push [%d][%d]\n", y-1, x);
		}
	}

	//Down
	if (y < rowNum - 1) {
		// can go down && not visited
		if (graph[y + 1][x] == 1 && visit[y + 1][x] == 0) {
			Q.push(make_pair(y + 1, x));
			visit[y + 1][x] = 1;
			//printf("push [%d][%d]\n", y+1,x);
		}
	}
}

void printGraph() {
	for (int i = 0; i < rowNum; i++) {
		for (int j = 0; j < colNum; j++) {
			printf("%d", graph[i][j]);
		}
		printf("\n");
	}
}