while True:
    dan = int(input('구구단 몇 단을 계산할까요? (1~9)\n'))
    if dan == 0: break

    print('구구단 %d단을 계산합니다.' % dan)
    for i in range(1, 10):
        print(dan, 'X', i, '=', dan * i)
print('구구단을 종료합니다.')