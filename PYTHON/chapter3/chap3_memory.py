a = 300
b = 300
print(a is b)
print(a == b)

a = [5, 4, 3, 2, 1]
b = [1, 2, 3, 4, 5]
b = a
print(b)
a.sort()
print(b)