N, M = map(int, input().split())
box = [0]*N

for _ in range(M):
    A, B = map(int, input().split())
    C = box[A]
    box[A] = box[B]
    box[B] = C
