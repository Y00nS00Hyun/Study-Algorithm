import sys
input = sys.stdin.readline

x1, y1 = map(int, input().split())
x2, y2 = map(int, input().split())
x3, y3 = map(int, input().split())

# y = ax + b
if x1 != x2:
    a = y2-y1
    b = y1*(x2-x1)-a*x1
    soohyun = a*x3+b

    if soohyun == y3*(x2-x1):
        print(0)
    elif soohyun < y3*(x2-x1):
        print(1)
    else:
        print(-1)

else:
    if y2 > y1:
        if x3 == x1:
            print(0)
        elif x3 < x1:
            print(1)
        else:
            print(-1)
    else:
        if x3 == x1:
            print(0)
        elif x3 < x1:
            print(-1)
        else:
            print(1)
