N, K = map(int, input().split())
number = list(map(int, input().split()))
count = 0


def dfs(idx, total):  # idx: 지금 보고 있는 원소의 위치(0 ~ N-1)
    global count
    if idx == N:
        return  # idx == N이면 더 이상 선택할 원소가 없음 → 종료

    total2 = total + number[idx]
    if total2 == K:
        count += 1

    # 1) 현재 원소를 선택하는 경우
    dfs(idx + 1, total2)

    # 2) 현재 원소를 선택하지 않는 경우
    dfs(idx + 1, total)


dfs(0, 0)
print(count)
