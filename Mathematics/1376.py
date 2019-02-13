# https://www.urionlinejudge.com.br/judge/en/problems/view/1376
from collections import defaultdict
from copy import deepcopy


def brothers(kingdom, heirs, line, column, number_battles):
    h = deepcopy(kingdom)
    for battle in range(number_battles):
        for i in range(line):
            for j in range(column):
                if kingdom[i][j] == heirs - 1:
                    enemy = 0
                else:
                    enemy = kingdom[i][j] + 1
                min_i = min(i + 1, line - 1)
                min_j = min(j + 1, column - 1)
                max_i = max(i - 1, 0)
                max_j = max(j - 1, 0)
                if kingdom[min_i][j] == enemy:
                    h[min_i][j] = kingdom[i][j]
                if kingdom[max_i][j] == enemy:
                    h[max_i][j] = kingdom[i][j]
                if kingdom[i][min_j] == enemy:
                    h[i][min_j] = kingdom[i][j]
                if kingdom[i][max_j] == enemy:
                    h[i][max_j] = kingdom[i][j]
        kingdom = deepcopy(h)

    return h


def test():
    heirs, line, column, number_battles = (3, 4, 4, 3)
    kingdom = [[0, 1, 2, 0], [1, 0, 2, 0], [0, 1, 2, 0], [0, 1, 2, 2]]
    assert brothers(kingdom, heirs, line, column, number_battles) == [[2, 2, 2, 0], [2, 1, 0, 1], [2, 2, 2, 0],
                                                                      [0, 2, 0, 0]]

    heirs, line, column, number_battles = (4, 2, 3, 4)
    kingdom = [[1, 0, 3], [2, 1, 2]]
    assert brothers(kingdom, heirs, line, column, number_battles) == [[1, 0, 3], [2, 1, 2]]

    heirs, line, column, number_battles = (8, 4, 2, 1)
    kingdom = [[0, 7], [1, 6], [2, 5], [3, 4]]
    assert brothers(kingdom, heirs, line, column, number_battles) == [[7, 6], [0, 5], [1, 4], [2, 3]]


def uri_output(kingdom, line, column):
    for i in range(line):
        for j in range(column):
            print(kingdom[i][j], end=' ')
        print()


def uri_format():
    while True:
        heirs, line, column, number_battles = (int(x) for x in input().split())
        if not any((heirs, line, column, number_battles)):
            break

        kingdom = defaultdict()
        for i in range(line):
            kingdom[i] = [int(x) for x in input().split()]

        kingdom = brothers(kingdom, heirs, line, column, number_battles)

        uri_output(kingdom, line, column)


if __name__ == '__main__':
    test()
    uri_format()
