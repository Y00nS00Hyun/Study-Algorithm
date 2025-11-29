# N = int(input())
# M = input()
# print(f"{N}번입니다.{M}")

N = int(input())
count = 0

for _ in range(N):
    stack = []
    arr = input()
    for i in arr:
        if i == '(':
            stack.append(i)
        elif i == ')':
            if stack:
                stack.pop()
            else:
                print("NO")
                count = 1
                break
    if (count == 0):
        if stack:
            print("NO")
        else:
            print("YES")
    count = 0
