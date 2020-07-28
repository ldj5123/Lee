print('튜플 조작기 ver 1')
print('튜플에 입력할 자료들을 차례로 입력하세요. 빈칸으로 구분합니다.')
a = input()
a = tuple(a.split(' '))

while True:
    print('작업할 내용을 입력하세요.')
    b = input('q = 끝내기, s = 슬라이싱, c = 세기, i - 존재여부 : ')

    if b == 'q':
        print('프로그램을 종료합니다.')
        break
    elif b == 's':
        b1 = int(input('From : '))
        b2 = int(input('To : '))
        print(a[b1:b2])
    elif b == 'c':
        c1 = input('찾을 자료 값은 : ')
        print(a.count(c1), '번 있습니다.')
    elif b == 'i':
        i1 = input('찾을 자료 값은 : ')
        print(i1 in a)
