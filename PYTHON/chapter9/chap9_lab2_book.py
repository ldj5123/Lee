def bookrent():
    bookList = {"1": '가', "2": '나', '3': '다', '4': '라', '5': '마', '6': '바', '7': '사', '8': '아'}
    rentList = {}

    while True:
        count = 0
        name = input('회원 이름을 입력하세요 : ')
        rentbookList = []
        if name == 'q':
            break
        while count != 3:
            bookCode = input('빌릴 책의 코드 : ')
            if bookCode == 'q':
                break
            rentbookList.append(bookList[bookCode])
            count += 1
        rentList[name] = rentbookList
    print('현재 대출자 목록', rentList)


bookrent()