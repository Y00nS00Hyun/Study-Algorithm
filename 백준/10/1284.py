# 숫자 n개 -> 공백 n-1 -> 앞 뒤 공백 2 추가
# 0 -> 4, 1 -> 2, 그 외 -> 3

while 1:
    N=input()
    if N != '0':
        res = len(N)+1;
        for n in N:
            if n == '0':
                res += 4
            elif n == '1':
                res += 2
            else:
                res += 3
        print(res)
    else:
        break
