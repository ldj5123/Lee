str = input('문서를 작성하세요\n')

findStr = input('찾을 문자를 입력하세요 : ')
findIndex = 0
for i in range(len(str)):
    if findStr == str[i]:
        findIndex = i+1
        print(findStr, '/', findIndex, '/', str.count(findStr))
    