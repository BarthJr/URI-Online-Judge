# https://www.urionlinejudge.com.br/judge/en/problems/view/1062
def check_train_reorganization(rail_a):
    station = []
    rail_b = []
    highest_active_position = len(rail_a)
    while rail_a:
        if rail_a[-1] == highest_active_position:
            rail_b.append(rail_a.pop())
            highest_active_position -= 1
        else:
            station.append(rail_a.pop())
        while station and station[-1] == highest_active_position:
            rail_b.append(station.pop())
            highest_active_position -= 1
    if not highest_active_position:
        return True
    else:
        return False


def test():
    assert check_train_reorganization([1, 4, 5, 3, 2]) is True
    assert check_train_reorganization([1, 4, 5, 2, 3]) is False
    assert check_train_reorganization([1, 2, 3, 4, 5]) is True
    assert check_train_reorganization([5, 4, 3, 2, 1]) is True
    assert check_train_reorganization([1, 3, 2, 5, 4, 6]) is True


def uri_format():
    while True:
        n = int(input())
        if not n:
            break
        while True:
            train = [int(x) for x in input().split()]
            if len(train) == 1 and train[0] == 0:
                print()
                break
            if check_train_reorganization(train):
                print('Yes')
            else:
                print('No')


if __name__ == '__main__':
    test()
    uri_format()
