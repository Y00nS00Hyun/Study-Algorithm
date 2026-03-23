N = int(input())
A = [0]*N
operator = [0]*4

# 여러 줄 거쳐서 입력 받기
for i in range(N):
    A[i] = int(input())

for i in range(N-1):
    operator[i] = int(input())
