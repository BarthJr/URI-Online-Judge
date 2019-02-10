# https://www.urionlinejudge.com.br/judge/en/problems/view/1607
testCases = int(input())

for testCase in range(testCases):
    count = 0
    a, b = (x for x in input().split())
    tam = len(a)
    for i, letter in enumerate(a):
        if ord(letter) > ord(b[i]):
            differenceUntilEnd = ord('z') - ord(letter)
            differenceUntilLetter = ord(b[i]) - ord('a')
            count += differenceUntilEnd + differenceUntilLetter + 1
        else:
            differenceBetweenLetters = ord(b[i]) - ord(letter)
            count += differenceBetweenLetters
    print(count)