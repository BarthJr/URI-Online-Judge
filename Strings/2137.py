# https://www.urionlinejudge.com.br/judge/en/problems/view/2137
def sort_library(library):
    return sorted(library)


def tests():
    assert sort_library(['1233', '0015', '0100']) == ['0015', '0100', '1233']
    assert sort_library(['0752', '1110', '0001', '6322', '8000', '6321', '0000']) == ['0000', '0001', '0752', '1110',
                                                                                      '6321', '6322', '8000']


def uri_format():
    while True:
        try:
            n = int(input())
            library = []
            for i in range(n):
                library.append(input())
            for number in sort_library(library):
                print(number)
        except EOFError:
            break


if __name__ == '__main__':
    tests()
    uri_format()
