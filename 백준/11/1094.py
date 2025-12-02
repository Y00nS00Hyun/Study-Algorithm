N = int(input())

count = 0
while N != 0:
    if N == 64:
        N -= 64
        count += 1
    elif N >= 32:
        N -= 32
        count += 1
    elif N >= 16:
        N -= 16
        count += 1
    elif N >= 8:
        N -= 8
        count += 1
    elif N >= 4:
        N -= 4
        count += 1
    elif N >= 2:
        N -= 2
        count += 1
    elif N >= 1:
        N -= 1
        count += 1
    else:
        break

print(count)
