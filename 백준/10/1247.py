import sys
input = sys.stdin.readline #이걸 해야 시간초과 안뜸

for _ in range(3):
    N=int(input())
    sum=0
    for _ in range(N):
        sum += int(input())
    if sum>0:
        print('+')
    elif sum<0:
        print('-')
    else:
        print('0')