while True:
    studentInfo = input('Data 입력 : ').split()
    if studentInfo[0] == '-1':
        break
    elif studentInfo[0] == '1' or not (studentInfo[0].isalpha()) or not (studentInfo[1].isdigit()):
        continue
    else:
        print(studentInfo)
        break
