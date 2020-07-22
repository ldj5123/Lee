import random as ran

ranNumber = ran.randint(1, 100)
flag = 0
userNumber = int(input('숫자를 맞혀 보세요. (1~100)\n'))
while flag == 0:
    if userNumber == ranNumber:
        print('정답입입니다. 입력한 숫자는 %d입니다.' % userNumber)
        flag = 1
    if userNumber > ranNumber:
        print('숫자가 너무 큽니다.')
    elif userNumber < ranNumber:
        print('숫자가 너무 작습니다.')
    userNumber = int(input())