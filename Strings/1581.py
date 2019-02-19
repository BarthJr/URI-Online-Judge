# https://www.urionlinejudge.com.br/judge/en/problems/view/1581
def international_chat():
    n = int(input())
    for i in range(n):
        apropriate_language = 'ingles'
        different_language = False
        number_people = int(input())
        first_person_language = input()
        for person in range(1, number_people):
            language = input()
            if language != first_person_language:
                different_language = True
        if not different_language:
            apropriate_language = first_person_language
        print(apropriate_language)


if __name__ == '__main__':
    international_chat()
