name = input('이름을 입력하세요 : ')
kor = int(input('국어 성적을 입력하세요 : '))
math = int(input('수학 성적을 입력하세요 : '))
sa = int(input('사회 성적을 입력하세요 : '))
sci = int(input('과학 성적을 입력하세요 : '))
eng = int(input('영어 성적을 입력하세요 : '))

sum = kor + math + sa + sci + eng
avr = sum / 5
avr = round(avr, 1)
print(name," 님의 성적은")
print('총합 ', sum, ' 점, 평균 ', avr, ' 점 입니다.')