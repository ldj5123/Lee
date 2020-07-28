def printNum(a, b, c):
    print(a)
    print(b)
    print(c)


def personalInfo(name, age, address):
    print('이름 : ', name)
    print('나이 : ', age)
    print('주소 : ', address)


def asteriskTest(a, b, *args):
    return a + b + sum(args)


def asteriskTest2(*args):
    x, y, *z = args
    return x, y, z


def kwargsTest(**kwargs):
    print(kwargs)
    print('Fist value is {first}'.format(**kwargs))
    print('Second value is {second}'.format(**kwargs))
    print('Second value is {second}'.format(first=3, second=4, third=5))
    print('Third value is {third}'.format(**kwargs))


x = [10, 20, 30]
printNum(*x)

personalInfo(age=30, address='서울시 용산구 이촌동', name='홍길동')

print(asteriskTest(1, 2, 3, 4, 5))
print(asteriskTest2(3, 4, 5, 10, 20))

kwargsTest(first=3, second=4, third=5)
