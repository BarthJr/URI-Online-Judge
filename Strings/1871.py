# https://www.urionlinejudge.com.br/judge/en/problems/view/1871
while True:
    a, b = [int(i) for i in input().split()]
    if not a and not b:
        break
    c = str(a + b).replace('0', '')
    print(c)