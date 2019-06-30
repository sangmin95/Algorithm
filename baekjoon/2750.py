# insertion sort

#input
N = int(input())
A = []
for i in range(N) :
    A.append(int(input()))

# sorting
if N is not 1 :
    for j in range(1,N) :
        key = A[j]
        i = j - 1
        while i >= 0 and A[i] > key :
            A[i+1] = A[i]
            i -= 1
        A[i+1] = key


# print
for i in range(N) :
    print (A[i])