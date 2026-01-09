from itertools import combinations

N, K = map(int, input().split())
number = list(map(int, input().split()))
count = 0

for i in range(1, N+1):
    for tuples in combinations(number, i):
        if sum(tuples) == K:
            count += 1

print(count)
