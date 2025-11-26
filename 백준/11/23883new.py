
def selection_sort(N, K, A):
    sortedA = sorted(A)
    numDict = {}

    for i, j in enumerate(A):
        numDict[j] = i

    count = 0
    for i in range(N-1, -1, -1):
        if sortedA[i] != A[i]:
            result = [A[i], sortedA[i]]
            A[i], A[numDict[sortedA[i]]] = A[numDict[sortedA[i]]], A[i]
            numDict[result[0]], numDict[result[1]
                                        ] = numDict[result[1]], numDict[result[0]]
            count += 1
        if K == count:
            print(*result)
            return
    print(-1)


N, K = map(int, input().split())
A = list(map(int, input().split()))
selection_sort(N, K, A)
