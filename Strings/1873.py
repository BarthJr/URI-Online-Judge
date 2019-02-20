# https://www.urionlinejudge.com.br/judge/en/problems/view/1873
def verify_winner(rajesh_weapon, sheldon_weapon):
    if rajesh_weapon == sheldon_weapon:
        return 'empate'
    rules = {
        'tesoura': ['papel', 'lagarto'],
        'papel': ['pedra', 'spock'],
        'pedra': ['lagarto', 'tesoura'],
        'lagarto': ['spock', 'papel'],
        'spock': ['tesoura', 'pedra'],
    }
    if sheldon_weapon in rules[rajesh_weapon]:
        winner = 'rajesh'
    elif rajesh_weapon in rules[sheldon_weapon]:
        winner = 'sheldon'

    return winner


def tests():
    assert verify_winner('spock', 'spock') == 'empate'
    assert verify_winner('tesoura', 'spock') == 'sheldon'
    assert verify_winner('lagarto', 'spock') == 'rajesh'


def uri_format():
    number_test_cases = int(input())
    for test_case in range(number_test_cases):
        rajesh_weapon, sheldon_weapon = [weapons for weapons in input().split()]
        print(verify_winner(rajesh_weapon, sheldon_weapon))


if __name__ == '__main__':
    tests()
    uri_format()
