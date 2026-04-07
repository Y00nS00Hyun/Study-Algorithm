N, M = list(map(int, input().split()))
visited = [False]*(N+1)
result = []


def soohyun(depth):
    if depth == M:
        print(*(result))
        return

    for i in range(1, N+1):

        result.append(i)
        soohyun(depth + 1)

        result.pop()


soohyun(0)
