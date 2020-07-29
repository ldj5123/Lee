class Employee(object):
    def __init__(self, name, year):
        self.name = name
        self.year = year
        print(self.name + '님의 연차는 ' + str(self.year) + '입니다.')


class YearSalary(Employee):
    def __init__(self, name, year):
        super().__init__(name, year)
        if self.year <= 5:
            self.mySalary = 3000 + (self.year * 100)
        elif self.year < 10:
            self.mySalary = 3500 + (self.year * 110)
        elif 10 <= self.year:
            self.mySalary = 4000 + (self.year * 130)

    def salary(self):
        print(self.name + '남의 연봉은 ' + str(self.mySalary) + '만원입니다.')

    def degree(self):
        self.mySalary = self.mySalary + 1200
        print(self.name + '님의 연봉은 학위소지로 인하여 ' + str(self.mySalary) + '만원입니다.')

    def __getattr__(self, name):
        print('잘못된 값입니다.')


a = YearSalary('파이썬', 7)


a.salary()

a.degree()

a.money

print(a.name, a.mySalary)
