def rectangleCheck(rect):
    if rect[0][0] < rect[2][0] < rect[1][0] or rect[0][0] < rect[3][0] < rect[1][0]:
        print('두개의 사각형이 겹침!')
    elif rect[0][1] < rect[2][1] < rect[1][1] or rect[0][1] < rect[3][1] < rect[1][1]:
        print('두개의 사각형이 겹침!')
    else:
        print('두개의 사각형 안겹침!')

rect = [[0,0],[0,0],[0,0],[0,0]]
rect[0][0] = int(input("첫번째 사각형의 P1.x = "))
rect[0][1] = int(input('첫번째 사각형의 P1.y = '))
rect[1][0] = int(input('첫번째 사각형의 P2.x = '))
rect[1][1] = int(input('첫번째 사각형의 P2.y = '))

rect[2][0] = int(input('두번째 사각형의 P3.x = '))
rect[2][1] = int(input('두번째 사각형의 P3.y = '))
rect[3][0] = int(input('두번째 사각형의 P4.x = '))
rect[3][1] = int(input('두번째 사각형의 P4.y = '))

rectangleCheck(rect)