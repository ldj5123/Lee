def absorptionSort(data):
    n = len(data)
    if n <= 1:
        return data
    mid = n // 2
    g1 = absorptionSort(data[:mid])
    g2 = absorptionSort(data[mid:])
    result = []

    while g1 and g2:
        if g1[0] < g2[0]:
            result.append(g1.pop(0))
        else:
            result.append(g2.pop(0))
    while g1:
        result.append(g1.pop(0))
    while g2:
        result.append(g2.pop(0))
    return result


sort = [14, 7, 3, 12, 9, 11, 6, 2]

print(absorptionSort(sort))
