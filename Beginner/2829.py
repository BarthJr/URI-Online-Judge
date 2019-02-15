# https://www.urionlinejudge.com.br/judge/en/problems/view/2829
def sort_lower(texts):
    return sorted(sorted(texts), key=str.lower)


def tests():
    texts = ['Abcd', 'zbcd', 'zBce', 'abzd']
    assert sort_lower(texts) == ['Abcd', 'abzd', 'zbcd', 'zBce']
    texts = ['Abc', 'abc', 'xyz', 'xYz', 'zzz']
    assert sort_lower(texts) == ['Abc', 'abc', 'xYz', 'xyz', 'zzz']


def uri_format():
    texts = []
    n = int(input())
    for i in range(n):
        texts.append(input())
    sorted_texts = sort_lower(texts)
    for text in sorted_texts:
        print(text)


if __name__ == '__main__':
    tests()
    uri_format()
