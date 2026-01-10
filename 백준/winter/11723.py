import sys

input = sys.stdin.readline

M = int(input())
arr = []


def add(x):
    if not x in arr:
        arr.append(x)


def remove(x):
    if x in arr:
        arr.remove(x)


def check(x):
    if x in arr:
        print(1)
    else:
        print(0)


def toggle(x):
    if x in arr:
        arr.remove(x)
    else:
        arr.append(x)


def all():
    global arr  # 재할당은 global 필수
    arr = []
    for i in range(20):
        arr.append(i+1)


def empty():
    global arr
    arr = []


for _ in range(M):
    cmd = input().split()  # 어차피 문자열
    if cmd[0] == "add":
        add(int(cmd[1]))
    elif cmd[0] == "remove":
        remove(int(cmd[1]))
    elif cmd[0] == "check":
        check(int(cmd[1]))
    elif cmd[0] == "toggle":
        toggle(int(cmd[1]))
    elif cmd[0] == "all":
        all()
    else:
        empty()
