kor = int(input('국어점수 : '))
eng = int(input('영어점수 : '))
his = int(input('한국사 점수 : '))
choice1 = int(input('선택과목1 점수 : '))
choice2 = int(input('선택과목2 점수 : '))


if kor>40 and eng > 40 and his > 40 and choice1 > 40 and choice2 > 40:
    print('과락아님')
else:
    print('과락')