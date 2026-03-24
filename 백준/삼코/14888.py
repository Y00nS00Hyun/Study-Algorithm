N = int(input())
A = list(map(int, input().split()))
op = list(map(int, input().split()))

minimum = 10 ** 9
maximum = -10**9


def dfs(depth, total, plus, minus, multiply, divide):  # depth: 몇 번째 숫자까지 사용했는지
    global minimum, maximum

    if plus != 0:
        dfs(depth+1, total+A[depth], plus-1, minus, multiply, divide)
    if minus != 0:
        dfs(depth+1, total-A[depth], plus, minus-1, multiply, divide)
    if multiply != 0:
        dfs(depth+1, total*A[depth], plus, minus, multiply-1, divide)
    if divide != 0:
        dfs(depth+1, int(total/A[depth]), plus, minus, multiply, divide-1)

    if depth == N:  # 숫자를 전부 다 사용했으면 끝낸다 -> 연산 한 번 끝
        maximum = max(total, maximum)
        minimum = min(total, minimum)


dfs(1, A[0], op[0], op[1], op[2], op[3])
print(maximum)
print(minimum)
