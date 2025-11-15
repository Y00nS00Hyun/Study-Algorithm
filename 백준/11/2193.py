N = int(input())

one = [0] * (N + 1)
zero = [0] * (N + 1)

if N == 1:
    print(1)
else:
    one[2] = 0
    zero[2] = 1
    for i in range(2, N):
        one[i + 1] = zero[i]
        zero[i + 1] = one[i] + zero[i]
    print(one[N] + zero[N])

print("나이:", 20)
