residentNum = input('주민등록번호를 숫자만 입력하세요 ')
suM = 0
checklist = [2, 3, 4, 5, 6, 7, 8, 9, 2, 3, 4, 5]
for i in range(len(checklist)):
    suM = suM + checklist[i] * int(residentNum[i])
    aaa = 11 - (suM % 11)
    if aaa < 10:
        aaa = 0

if int(residentNum[12]) != aaa:
    print('잘못된 주민등록번호입니다.')
else:
    print('정상적인 주민등록번호입니다.')