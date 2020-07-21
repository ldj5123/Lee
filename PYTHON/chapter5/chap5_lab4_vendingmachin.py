print('사이다 - 700원 콜라 - 800원 물 - 1200원')
myMoney = int(input('얼마를 입력하시겠습니까 : '))
menuChoice = int(input('선택) 1- 사이다 2- 콜라 3- 물 : '))

if menuChoice == 1:
    if myMoney < 700:
        print('음료수를 뽑을수 없습니다.')
        print('잔돈 ', myMoney, '원 반환합니다.')
    else:
        print('사이다가 나왔습니다. 덜컬')
        myMoney -= 700
        print('잔돈 ', myMoney,'원 반환합니다.')
elif menuChoice == 2:
    if myMoney < 800:
        print('음료수를 뽑을수 없습니다.')
        print('잔돈 ', myMoney, '원 반환합니다.')
    else:
        print('사이다가 나왔습니다. 덜컬')
        myMoney -= 800
        print('잔돈 ', myMoney,'원 반환합니다.')
elif menuChoice == 3:
    if myMoney < 1200:
        print('음료수를 뽑을수 없습니다.')
        print('잔돈 ', myMoney, '원 반환합니다.')
    else:
        print('사이다가 나왔습니다. 덜컬')
        myMoney -= 1200
        print('잔돈 ', myMoney,'원 반환합니다.')