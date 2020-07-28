n = 0
student = []

while True:
    n = n+1
    studentNumber = int(input('학번 : '))
    if studentNumber == 0:
        print('종료되었습니다.')
        break
    studentName = input('이름 :')
    studentBirth = input('생년월일 : ')
    studentPhone = input('전화번호 : ')
    studentAddres = input('주소 : ')

    student.append({"학번":studentNumber,"이름":studentName, "생년월일":studentBirth, "전화번호":studentPhone, "주소":studentAddres})
    print('%d 학생의 정보 입력 완료 %s'%(n, student[n-1]))