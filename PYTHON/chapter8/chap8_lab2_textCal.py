num1, oper, num2 = input('수식 입력 : ').split()


if oper == '+':
    answer = int(num1) + int(num2)
elif oper == '-':
    answer = int(num1) - int(num2)
elif oper == '*':
    answer = int(num1) * int(num2)
elif oper == '/':
    answer = float(num1) / float(num2)

answer = int(abs(answer))

answer = chr(answer)

print(answer)