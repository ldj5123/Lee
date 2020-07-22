import random as ran

choiceNum = []
ranNum = []
ranNum.append(ran.randint(0, 9))
ranNum.append(ran.randint(0, 9))
ranNum.append(ran.randint(0, 9))
while True:

    if ranNum[0] == ranNum[1]:
        ranNum[1] = ran.randint(0, 9)
    else:
        if ranNum[0] == ranNum[2] or ranNum[1] == ranNum[2]:
            ranNum[2] = ran.randint(0, 9)
        else:
            break
print('0과 9 사이의 서로 다른 세 숫자를 랜덤한 순서로 뽑았습니다.')
print('세 수를 하나씩 차례대로 입력하세요.')

choiceNum.append(int(input('첫 번째 수를 입력하세요 : ')))
choiceNum.append(int(input('두 번째 수를 입력하세요 : ')))
choiceNum.append(int(input('세 번째 수를 입력하세요 : ')))
while True:
    strike = 0
    ball = 0
    print(choiceNum)
    for index0, value0, in enumerate(choiceNum):
        for index1, value1, in enumerate(ranNum):
            if index0 == index1 and value0 == value1:
                strike += 1
            elif index0 != index1 and value0 == value1:
                ball += 1
    print(strike, 'S', ball, "B")
    if strike == 3:
        print('성공!')
        break

    print('세 수를 하나씩 차례대로 입력하세요.')

    choiceNum[0] = (int(input('첫 번째 수를 입력하세요 : ')))
    choiceNum[1] = (int(input('두 번째 수를 입력하세요 : ')))
    choiceNum[2] = (int(input('세 번째 수를 입력하세요 : ')))
