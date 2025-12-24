N, K = map(int, input().split())

item = [(0, 0)]  # 1번부터 쓰려고 더미 추가

for i in range(N):
    w, v = map(int, input().split())
    item.append((w, v))

for i in range(1, N+1):
    for j in range(1, K+1):
        print("배열 입력 받기까지는 완료")
