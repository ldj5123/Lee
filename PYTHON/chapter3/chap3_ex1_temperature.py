print('본프로그램은 섭씨온도를 화씨온도로 변환하는 프로그램입니다.')
celsius = float(input('변환하고 싶은 섭씨온도(C)를 입력하세요 : '))
fahrenheit = (celsius*1.8) + 32
fahrenheit = round(fahrenheit, 2)
print('섭씨온도: ', celsius)
print('화씨온도: ', fahrenheit)