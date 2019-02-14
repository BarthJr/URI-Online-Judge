# https://www.urionlinejudge.com.br/judge/en/problems/view/1024
from itertools import count, chain


def crypt(text):
    half = len(text) // 2
    reversed_text = reversed(text)
    first_generator = (chr(ord(c) + 3) if c.isalpha() else c for _, c in zip(range(half), reversed_text))
    second_generator = (chr(ord(c) + 2) if c.isalpha() else chr(ord(c) - 1) for _, c in zip(count(half), reversed_text))

    return ''.join(chain(first_generator, second_generator))


def tests():
    assert crypt('Texto #3') == '3# rvzgV'
    assert crypt('abcABC1') == '1FECedc'
    assert crypt('vxpdylY .ph') == 'ks. \\n{frzx'
    assert crypt('vv.xwfxo.fd') == 'gi.r{hyz-xx'


def uri_format():
    n = int(input())
    for i in range(n):
        text = input()
        print(crypt(text))


if __name__ == '__main__':
    tests()
    uri_format()
