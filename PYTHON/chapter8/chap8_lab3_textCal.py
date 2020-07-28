def simul(myList):
    myList1 = map(str, myList)
    print('자료 요소 참 여부 : ', all[myList1])
    print('자료 길이 : ', len(myList1))
    print('자료 중 최대값 : ', max(myList1))
    print('정렬 시 자료 순서 : ', sorted(myList1))
    print('자료 번호 : ', list(enumerate(myList1)))


simul([1, 3, 5, "A", "b"])
