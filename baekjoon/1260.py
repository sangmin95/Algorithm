from collections import deque


def BFS():
    queue = deque([StartingPoint])
    while len(queue) > 0:
        nowPosition = queue.popleft()
        VisitBFS[nowPosition] = 1
        print(nowPosition, end=" ")
        for i in range(1, N + 1):
            if Edges[nowPosition][i] == 1 and VisitBFS[i] == 0:
                queue.append(i)
                VisitBFS[i] = 1


def DFS():
    stack = [StartingPoint]
    print(StartingPoint, end=" ")
    while len(stack) > 0:
        nowPosition = stack[-1]
        VisitDFS[nowPosition] = 1
        stack.pop()
        for i in range(1, N + 1):
            if Edges[nowPosition][i] == 1 and VisitDFS[i] == 0:
                VisitDFS[i] = 1
                stack.append(nowPosition)
                stack.append(i)
                print(i, end=" ")
                break
    print()


# Initialize
N, M, StartingPoint = map(int, input().split())

Edges = [[0 for i in range(N + 1)] for j in range(N + 1)]
VisitBFS = [0 for i in range(N + 1)]
VisitDFS = [0 for i in range(N + 1)]

for i in range(M):
    row, col = map(int, input().split())
    Edges[row][col] = 1
    Edges[col][row] = 1

DFS()
BFS()
