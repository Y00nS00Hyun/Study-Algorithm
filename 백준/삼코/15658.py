N = int(input())
A = list(map(int, input().split()))
operater = list(map(int, input().split()))

minimum = 10**9
maximum = -10**9
p = 0
m = 100
mm = 1000
d = 10000


def dfs(depth, total, plus, minus, multiply, divide):
    global minimum, maximum
    global p, m, mm, d

    if depth == N:
        minimum = min(minimum, total)
        maximum = max(maximum, total)

    if plus:
        dfs(depth+1, total+A[depth], plus-1, minus, multiply, divide)
        p += 1
    if minus:
        dfs(depth+1, total-A[depth], plus, minus-1, multiply, divide)
        m += 1
    if multiply:
        dfs(depth+1, total*A[depth], plus, minus, multiply-1, divide)
        mm += 1
    if divide:
        dfs(depth+1, int(total/A[depth]), plus, minus, multiply, divide-1)
        d += 1


print(p, m, mm, d)
dfs(1, A[0], operater[0], operater[1], operater[2], operater[3])
print(maximum, minimum)
