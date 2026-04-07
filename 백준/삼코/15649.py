N, M = list(map(int, input().split()))
visited = [False]*(N+1)
result = []


def soohyun(depth):
    if depth == M:
        print(*(result))  # 리스트 원소들을 공백으로 구분해 출력
        return

    for i in range(1, N+1):
        if visited[i] == False:
            visited[i] = True
            result.append(i)
            soohyun(depth + 1)

            result.pop()
            visited[i] = False


soohyun(0)
