a = [[10, 20], [30, 40], [50, 60]]
for x, y in a:
    print(x, y)

a = [38, 21, 53, 62, 19]
for index, value in enumerate(a):
    print(index+1, value)

a = [i for i in range(10) if i % 2 == 0]
print(a)