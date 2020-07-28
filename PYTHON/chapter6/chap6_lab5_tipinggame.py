import random
import time
cor = 0
w = ['cat', 'dog', 'fox', 'monkey', 'mouse', 'panda', 'frog', 'snake', 'wolf']

input('[타자게임] 준비되면 아무키나 누르세요!')
start = time.time()

for i in range(5):
    Que = random.choice(w)
    print('\n* 문제', i+1, '\n', Que)

    answer = input('\n')
    if Que.upper() == answer.upper():
        print('통과!')
        cor += 1
    else:
        print('실패')
end = time.time()

print('타자 시간 : ', round(end - start, 2))
print('맞춘갯수 : ', cor)