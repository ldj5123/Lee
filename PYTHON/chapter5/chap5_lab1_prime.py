def is_prime(num):
    for i in range(2, num):

        if num % i == 0:
            return False
    return True

num = int(input('숫자를 입력하세요 : '))
print(is_prime(num))

