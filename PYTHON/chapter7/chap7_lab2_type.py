item = [dict(품명='믹스', 가격=6000, 현재개수=2), dict(품명='종이컵', 가격=15000, 현재개수=3), dict(품명='커피스틱', 가격=3000, 현재개수=1)]

for i in range(len(item)):
    money_sum = 0
    if item[i]['현재개수'] < 3:
        money = ((3 - item[i]['현재개수']) * item[i]['가격'])
        money_sum = money_sum + money
    print('총비용', money_sum)
