N, M = map(int, input().split())
box = [i+1 for i in range(N)]

for _ in range(M):
    A, B = map(int, input().split())
    box[A-1], box[B-1] = box[B-1], box[A-1]

print(*box)
