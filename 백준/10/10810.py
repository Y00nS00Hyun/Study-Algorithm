N, M = map(int, input().split())
box=[0]*N

for _ in range(M):
    start, end, number=map(int, input().split())
    box[start-1:end]=[number]*(end-start+1)
    #슬라이스 인덱스 규칙: 시작 인덱스 a는 포함, 끝 인덱스 b는 포함되지 않음

print(*box)