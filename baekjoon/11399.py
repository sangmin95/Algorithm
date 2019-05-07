N = int(input())

getinput = input().split()
arr = [int(i) for i in getinput]
arr.sort()

nowTime = 0
for i in range(N):
    nowTime += int(arr[i])*(N-i)

print (nowTime)