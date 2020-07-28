class Bank:
    def __init__(self, balance=0):
        self.balance = balance

    def withdraw(self, out):
        self.balance = self.balance - out
        print('통장에서', out, '원이 출금되었음')

    def deposit(self, input):
        self.balance = self.balance + input
        print('통장에', input, '원이 입금되었음')

    def __str__(self):
        return '현재 잔액 %s원 입니다.'% (self.balance)


myBank = Bank()
myBank.withdraw(500)
myBank.deposit(1000)
print(myBank)
