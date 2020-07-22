import random as rd

computerRPC = rd.randint(0, 2)
userRPC = input('가위, 바위, 보 중에서 하나를 선택하세요: ')
if computerRPC == 0 and userRPC == '가위':
    print('사용자: ', userRPC, '컵퓨터: 가위')
    print('비겼음!')
elif computerRPC == 0 and userRPC == '바위':
    print('사용자: ', userRPC, '컵퓨터: 가위')
    print('사용자가 이겼음!')
elif computerRPC == 0 and userRPC == '보':
    print('사용자: ', userRPC, '컵퓨터: 가위')
    print('컴퓨터가 이겼음!')
elif computerRPC == 1 and userRPC == '가위':
    print('사용자: ', userRPC, '컵퓨터: 바위')
    print('컴퓨터가 이겼음!')
elif computerRPC == 1 and userRPC == '바위':
    print('사용자: ', userRPC, '컵퓨터: 바위')
    print('비겼음!')
elif computerRPC == 1 and userRPC == '보':
    print('사용자: ', userRPC, '컵퓨터: 바위')
    print('사용자가 이겼음!')
elif computerRPC == 2 and userRPC == '가위':
    print('사용자: ', userRPC, '컵퓨터: 보')
    print('사용자가 이겼음!')
elif computerRPC == 2 and userRPC == '바위':
    print('사용자: ', userRPC, '컵퓨터: 보')
    print('컴퓨터가 이겼음!')
elif computerRPC == 2 and userRPC == '보':
    print('사용자: ', userRPC, '컵퓨터: 보')
    print('비겼음!')
