N, M = list(map(int, input().split()))
visited = [False]*(N+1)
result = [0]


def soohyun(depth):
    if depth == M:
        print(*(result[1:]))  # 첫 번쨰 수 뺴고 공백 두고 출력
        return

    for i in range(1, N+1):
        if i >= result[-1]:
            result.append(i)
            soohyun(depth + 1)
            result.pop()


soohyun(0)
