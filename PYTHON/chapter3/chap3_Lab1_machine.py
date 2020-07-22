price = int(input('물건값을 입력하시오: '))
money1000 = int(input('1000원 지폐개수: '))
money500 = int(input('500원 동전개수: '))
money100 = int(input('100원 동전개수: '))
myMoney = money1000 * 1000 + money500 * 500 + money100 * 100
change = myMoney - price

changemoney500 = change // 500
changemoney100 = change % 500 // 100
changemoney10 = change % 500 % 100 // 10
changemoney1 = change % 500 % 100 % 10 // 1

print('500원= ', changemoney500, '100원= ', changemoney100, '10원= ', changemoney10, '1원= ', changemoney1)