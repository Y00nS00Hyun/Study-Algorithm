# N = int(input())
# M = input()
# print(f"{N}번입니다.{M}")
N = int(input())

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
                break
    else:
        if stack:
            print("NO")
        else:
            print("YES")
