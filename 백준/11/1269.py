Anum, Bnum = map(int, input().split())

A = list(map(int, input().split()))
B = list(map(int, input().split()))

if Anum < Bnum:
    number = Anum
else:
    number = Bnum

count = 0
for i in range(number):
    if A[i] in B:
        count += 1

print(Anum+Bnum-2*count)
