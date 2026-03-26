N = int(input())
A = list(map(int, input().split()))
operator = list(map(int, input().split()))

minimum = 10**9
maximum = -10**9


def dfs(depth, total, plus, minus, multiply, divide):
    global minimum, maximum

    if depth == N:
        minimum = min(minimum, total)
        maximum = max(maximum, total)
        return

    if plus:
        dfs(depth+1, total+A[depth], plus-1, minus, multiply, divide)

    if minus:
        dfs(depth+1, total-A[depth], plus, minus-1, multiply, divide)

    if multiply:
        dfs(depth+1, total*A[depth], plus, minus, multiply-1, divide)

    if divide:
        dfs(depth+1, int(total/A[depth]), plus, minus, multiply, divide-1)


dfs(1, A[0], operator[0], operator[1], operator[2], operator[3])
print(maximum, minimum)
