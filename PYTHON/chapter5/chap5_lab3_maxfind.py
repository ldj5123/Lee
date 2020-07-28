def max_num(my_list):
    maxNum = 0
    for i in range(len(my_list)):
        for j in range(len(my_list)):
            if my_list[i] != my_list[j] and my_list[i] > my_list[j] and my_list[i] > maxNum:
                maxNum = my_list[i]
                max_index = i
    return max_index


def find_num(num, mylist):
    for i in range(len(my_list)):
        if mylist[i] == num:
            return i
        elif len(my_list)-1 == i:
            return -1


my_list = []
my_list.extend(map(int, input('리스트를 입력하시오 : ').split()))
test = list(map(int, input('리스트를 입력 : ').split()))
print(test)
print(max_num(my_list))
print(find_num(18, my_list))
print(find_num(42, my_list))
print(find_num(900, my_list))