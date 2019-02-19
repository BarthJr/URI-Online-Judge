# https://www.urionlinejudge.com.br/judge/en/problems/view/1961
def verify_if_frog_wins(pipes_heights, jump_height):
    def recursion(index):
        if index == len(pipes_heights):
            return True
        elif abs(pipes_heights[index] - pipes_heights[index - 1]) <= jump_height:
            return recursion(index + 1)
        else:
            return False

    return recursion(1)


def tests():
    assert verify_if_frog_wins([1, 3, 6, 9, 7, 2, 4, 5, 8, 3], 5)
    assert verify_if_frog_wins([2, 2], 1)
    assert not verify_if_frog_wins([1, 3], 1)


def uri_format():
    jump_height, number_pipes = [int(x) for x in input().split()]
    pipes_heights = [int(x) for x in input().split()]
    if verify_if_frog_wins(pipes_heights, jump_height):
        print('YOU WIN')
    else:
        print('GAME OVER')


if __name__ == '__main__':
    tests()
    uri_format()
