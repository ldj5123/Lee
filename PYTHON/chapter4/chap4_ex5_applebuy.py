appleQuality = input('사과의 상태 : ')
applePrice = int(input('사과1개의 가격 : '))

if appleQuality == 'fresh':
    if applePrice < 1000:
        print('10개를 산다')
    else:
        print('5개를 산다')
else:
    print('사과를 사지않는다.')