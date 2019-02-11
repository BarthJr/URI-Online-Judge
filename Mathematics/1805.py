# https://www.urionlinejudge.com.br/judge/en/problems/view/1805
a, b = [int(x) for x in input().split()]
print(int((a + b) * (b - a + 1) / 2))
