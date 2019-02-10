# https://www.urionlinejudge.com.br/judge/en/problems/view/1068
while True:
    try:
        parenthesis = 0
        expression = (x for x in input() if x in '()')
        for i in expression:
            if i == '(':
                parenthesis += 1
            elif i == ')':
                if not parenthesis:
                    parenthesis -= 1
                    break
                parenthesis -= 1
        if not parenthesis:
            print('correct')
        else:
            print('incorrect')
    except EOFError:
        break
