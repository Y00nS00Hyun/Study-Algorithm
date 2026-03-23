N, r, c = map(int, input().split())
visit = 0

while (r != 0 and c != 0):
    if (r < 2**(N-1)-1):  # 1번
        if (c >= 2**(N-1)-1):  # 2번
            c -= 2**(N-1)
            visit += 2**(2*N-2)
    else:
        r -= 2**(N-1)
        if (c >= 2**(N-1)-1):  # 4번
            c -= 2**(N-1)
            visit += (2**(2*N-2))*3
        else:  # 3번
            visit += (2**(2*N-2))*2
    N -= 1

print(visit)
