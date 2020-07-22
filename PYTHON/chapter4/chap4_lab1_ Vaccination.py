ageMonth = int(input('아이가 태어난 지 몇 개월입니까? '))
if ageMonth <= 1:
    print('결핵 에방접종 대상자입니다.')
if ageMonth <= 2:
    print('B형간염 에방접종 대상자입니다.')
if 2 <= ageMonth <= 6:
    print('파상풍 에방접종 대상자입니다.')
if 2 <= ageMonth <= 15:
    print('폐렴구균 에방접종 대상자입니다.')