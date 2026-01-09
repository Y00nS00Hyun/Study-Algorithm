N = int(input())
zzapN = N
soohyun = []
count = 0
choco = 1

for i in range(19, -1, -1):
    if N > 2 ** i:
        choco = (2 ** i)*2
        break

while N != 0:
    for i in range(19, -1, -1):
        if N >= 2 ** i:
            soohyun.append(i)
            N = N-(2 ** i)
            count += 1

for i in range(19, -1, -1):
    if zzapN == 2 ** i:
        print(choco, 0)
        break
else:
    print(choco, soohyun[0]-soohyun[-1]+1)
