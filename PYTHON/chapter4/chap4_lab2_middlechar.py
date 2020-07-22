str = input('문자열을 입력하시오 : ')
print(len(str))
if (len(str) % 2 == 0):
    i = len(str) // 2
    print('중앙글자는 ', str[i-1], str[i])
else:
    i = len(str) // 2
    print('중앙글자는 ', str[i])