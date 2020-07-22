friendList = []
exitContact = 1
while exitContact:
    print('-' * 20)
    print('1. 친구 리스트 출력\n2. 친구추가\n3. 친구삭제\n4. 이름변경\n9. 종료')
    menuChoice = int(input('메뉴를 선택하시오 : '))
    if menuChoice == 1:
        for index, value in enumerate(friendList):
            print('\n',index + 1, value)
    elif menuChoice == 2:
        friendList.append(input('이름을 입력하시오 : '))
        friendList.sort()
    elif menuChoice == 3:
        friendList.remove(input('삭제할 이름을 입력하시오 : '))
    elif menuChoice == 4:
        changeNum = int(input('변경할 이름의 번호를 입력하세요 : '))
        friendList[changeNum-1] = input('이름을 입력하세요 : ')
    elif menuChoice == 9:
        print('프로그램을 종료합니다.')
        exitContact = 0
    else:
        print('잘못누르셨습니다.')