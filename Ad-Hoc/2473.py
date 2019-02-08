# https://www.urionlinejudge.com.br/judge/en/problems/view/2473
numerosJogados = (i for i in input().split())
numerosSorteados = (i for i in input().split())
listaNumerosAcertados = set(numerosJogados).intersection(numerosSorteados)
numerosAcertados = len(listaNumerosAcertados)
if numerosAcertados == 6:
    print('sena')
elif numerosAcertados == 5:
    print('quina')
elif numerosAcertados == 4:
    print('quadra')
elif numerosAcertados == 3:
    print('terno')
else:
    print('azar')