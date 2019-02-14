# https://www.urionlinejudge.com.br/judge/en/problems/view/1077
def infix_to_posfix(expression):
    stack = []
    result = []
    priority = {
        '^': 3,
        '*': 2,
        '/': 2,
        '-': 1,
        '+': 1,
    }
    for char in expression:
        if char == '(':
            stack.append(char)
        elif char == ')':
            while stack[-1] != '(':
                result.append(stack.pop())
            stack.pop()
        elif char not in priority:
            result.append(char)
        else:
            while stack and priority.get(char) <= priority.get(stack[-1], 0):
                result.append(stack.pop())
            stack.append(char)
    while stack:
        result.append(stack.pop())

    return ''.join(result)


def tests():
    assert infix_to_posfix('A*2') == 'A2*'
    assert infix_to_posfix('(A*2+c-d)/2') == 'A2*c+d-2/'
    assert infix_to_posfix('(2*4/a^b)/(2*c)') == '24*ab^/2c*/'


def uri_format():
    number_expressions = int(input())
    for i in range(number_expressions):
        expression = input()
        print(infix_to_posfix(expression))


if __name__ == '__main__':
    tests()
    uri_format()
