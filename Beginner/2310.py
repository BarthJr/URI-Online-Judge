# https://www.urionlinejudge.com.br/judge/en/problems/view/2310
def volleyball():
    service_attempts = blocks_attempts = attack_attempts = 0
    service_successful = blocks_successful = attack_successful = 0
    n = int(input())
    for i in range(n):
        input()
        attempts = [int(x) for x in input().split()]
        success = [int(x) for x in input().split()]

        service_attempts += attempts[0]
        blocks_attempts += attempts[1]
        attack_attempts += attempts[2]

        service_successful += success[0]
        blocks_successful += success[1]
        attack_successful += success[2]

    print('Pontos de Saque: {:.2f} %.'.format((service_successful * 100) / service_attempts))
    print('Pontos de Bloqueio: {:.2f} %.'.format((blocks_successful * 100) / blocks_attempts))
    print('Pontos de Ataque: {:.2f} %.'.format((attack_successful * 100) / attack_attempts))


if __name__ == '__main__':
    volleyball()
