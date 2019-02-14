# https://www.urionlinejudge.com.br/judge/en/problems/view/2242
def verify_laugh(laugh):
    chunks = []
    for char in laugh:
        if char in 'aeiou':
            chunks.append(char)
    laugh_without_consonants = ''.join(chunks)
    if laugh_without_consonants == ''.join(reversed(laugh_without_consonants)):
        return 'S'
    else:
        return 'N'


def tests():
    assert verify_laugh('hahaha') == 'S'
    assert verify_laugh('riajkjdhhihhjak') == 'N'
    assert verify_laugh('a') == 'S'
    assert verify_laugh('huaauhahhuahau') == 'S'


def uri_format():
    laugh = input()
    print(verify_laugh(laugh))


if __name__ == '__main__':
    tests()
    uri_format()
