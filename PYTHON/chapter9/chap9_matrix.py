matrix_a = [[3,6], [4,5]]
matrix_b = [[5,8], [6,7]]
result = [[sum(row) for row in zip(*t)] for t in zip(matrix_a, matrix_b)]

print(result)

matrix_a = [[1, 1], [1, 1]]
matrix_b = [[1, 1], [1, 1]]
print(all([row[0] == value for t in zip(matrix_a, matrix_b) for row in zip(*t) for value in row]))

matrix_b = [[5, 8], [6, 7]]

print(all([row[0] == value for t in zip(matrix_a, matrix_b) for row in zip(*t) for value in row]))
print(all([all([row[0] == value for value in row]) for t in zip(matrix_a, matrix_b) for row in zip(*t)]))

matrix_a = [[1, 1, 2], [2, 1, 1]]
matrix_b = [[1, 1], [2, 1], [1, 3]]
result = [[sum(a * b for a, b in zip(row_a, column_b)) for column_b in zip(*matrix_b)] for row_a in matrix_a]
print(result)