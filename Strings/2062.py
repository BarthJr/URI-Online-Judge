# https://www.urionlinejudge.com.br/judge/en/problems/view/2062
def obi_uri(words):
    return ' '.join(_obi_uri_generator(words))


def _obi_uri_generator(words):
    for word in words:
        if len(word) == 3 and word[:2] in ('OB', 'UR'):
            yield word[:2] + 'I'
        else:
            yield word


def tests():
    assert obi_uri(['OBO', 'URU']) == 'OBI URI'
    assert obi_uri(['EURO', 'AVOID', 'OBITS']) == 'EURO AVOID OBITS'
    assert obi_uri(['URA', 'URO', 'URI', 'URU', 'UROS', 'IBO', 'OBA', 'OBAS', 'OBES',
                    'OBE']) == 'URI URI URI URI UROS IBO OBI OBAS OBES OBI'


def uri_format():
    int(input())
    words = [word for word in input().split()]
    print(obi_uri(words))


if __name__ == '__main__':
    tests()
    uri_format()
