cities = ['서울', '부산', '인천', '대구', '대전', '광주', '울산', '수원']

print(cities[0:6])
print(cities[0:5])
print(cities[5:])
print(cities[-8:])
print(cities[:])
print(cities[-50:50])
print(cities[::2])
print(cities[::-2])
del cities[0]
print(cities)
del cities[0:3]
print(cities)
cities[0:3] = []
print(cities)

a = [10, 20, 30, 15, 20, 40]
print(a.index(20))
print(a.count(20))
a.sort()
print(a)
