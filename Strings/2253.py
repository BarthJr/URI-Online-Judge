# https://www.urionlinejudge.com.br/judge/en/problems/view/2253
import re


def password_validator(password):
    while True:
        if len(password) < 6 or len(password) > 32:
            break
        elif not re.search('[a-z]', password):
            break
        elif not re.search('[A-Z]', password):
            break
        elif not re.search('[0-9]', password):
            break
        elif not password.isalnum():
            break
        else:
            return True
        return False


def tests():
    assert not password_validator('URI Online Judge')
    assert password_validator('AbcdEfgh99')
    assert password_validator('URIOnlineJudge12')
    assert not password_validator('URI Online Judge 12')
    assert not password_validator('Aass9')
    assert password_validator('Aassd9')


def uri_format():
    while True:
        try:
            password = input()
            if password_validator(password):
                print('Senha valida.')
            else:
                print('Senha invalida.')
        except EOFError:
            break


if __name__ == '__main__':
    tests()
    uri_format()
