maxCelsius = int(input('몇 도씨까지 출력 : '))
increase = int(input('증가 폭을 입력 : '))

for i in range(0, maxCelsius + increase, increase):
    celsius = (i - 32) * 5 / 9
    print(i, ' -> ', round(celsius, 2))
