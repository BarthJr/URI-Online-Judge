# https://www.urionlinejudge.com.br/judge/en/problems/view/1278
def justifier2():
    first_test_case = True
    while True:
        n = int(input())
        if not n:
            break

        texts = []
        for i in range(n):
            texts.append(' '.join(input().split()))
        max_len = len(max(texts, key=len))
        if not first_test_case:
            print()

        for text in texts:
            print(text.rjust(max_len))

        first_test_case = False


if __name__ == '__main__':
    justifier2()
