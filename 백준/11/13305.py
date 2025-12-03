N = int(input())
A = list(map(int, input().split()))
B = list(map(int, input().split()))

answer = 0
m = B[0]
B.pop()

for i in range(N-1):
    # answer += min(B[:i+1])*A[i]
    if B[i] < m:
        m = B[i]
        answer += B[i]*A[i]
    else:
        answer += m*A[i]
    # print(m, answer)

print(answer)
