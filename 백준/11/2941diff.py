word = input()
answer = len(word)
i = 0

while i < len(word):
    if word[i:i+3] in ('dz=',):
        answer -= 2
        i += 3
    elif word[i:i+2] in ('c=', 'c-', 'd-', 'lj', 'nj', 's=', 'z='):
        answer -= 1
        i += 2
    else:
        i += 1


print(answer)
