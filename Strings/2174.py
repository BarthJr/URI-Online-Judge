# https://www.urionlinejudge.com.br/judge/en/problems/view/2174
def pokemon_collection():
    number_pokemons_captured = int(input())
    pokemons = {}
    for i in range(number_pokemons_captured):
        pokemon = input()
        pokemons[pokemon] = pokemons.get(pokemon, 0) + 1
    print('Falta(m) {} pomekon(s).'.format(151 - len(pokemons.keys())))


if __name__ == '__main__':
    pokemon_collection()
