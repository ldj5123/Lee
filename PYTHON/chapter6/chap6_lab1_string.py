while True:
    str = input('문장을 입력하세요. \'q\'입력시 종료합니다.').split()
    if str[0] == 'q':
        break
    for i in range(len(str)):
        print(str[i][0])


