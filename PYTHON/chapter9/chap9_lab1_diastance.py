def distance(x=0, y=0):
    if x == 0:
        x = int(input('x좌표를 입력하세요 : '))
    if y == 0:
        y = int(input('y좌표를 입력하세요 : '))
    dis = x ** 2 + y ** 2
    dis = dis ** 0.5
    print(dis)


distance(3, 4)
distance()
