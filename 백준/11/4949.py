while True:
    N = input()
    if N != '.':
        stack = []
        for i in N:
            if i == '(' or i == '[':
                stack.append(i)

            elif i == ')':
                if not stack or stack[-1] == '[':
                    stack.append(0)
                    break
                else:
                    stack.pop()

            elif i == ']':
                if not stack or stack[-1] == '(':
                    stack.append(0)
                    break
                else:
                    stack.pop()

        if not stack:
            print('yes')
        else:
            print('no')

    else:
        break
