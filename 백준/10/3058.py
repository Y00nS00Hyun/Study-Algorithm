for _ in range(int(input())):
    soohyun=list(map(int, input().split()))
    even=[]
    for n in soohyun:
        if n %2==0:
            even.append(n)
    print(sum(even), min(even))
