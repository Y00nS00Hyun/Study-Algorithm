import sys
input = sys.stdin.readline

x1, y1 = map(int, input().split())
x2, y2 = map(int, input().split())
x3, y3 = map(int, input().split())

# y = ax + b
a = (y2-y1)/(x2-x1)
b = y1-a*x1
soohyun = a*x3+b

if soohyun == y3:
    print(0)
elif soohyun < y3:
    print(1)
else:
    print(-1)
