arr = [False, False, True, True, True]

for i in range(len(arr)):
    if arr[i] == True:
        print(i+1, end=' ')  # 줄바꿈 방지
