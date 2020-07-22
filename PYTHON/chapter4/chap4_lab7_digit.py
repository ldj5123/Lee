number = input('각 자릿수를 더할 숫자를 입력하세요 : ')
sum = 0
i = 0
while len(number) != i:
    sum += int(number[i])
    i+=1
print('자리수의 합은 %d입니다.'% sum)