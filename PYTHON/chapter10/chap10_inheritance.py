class Person(object):
    def __init__(self, name, age, gender):
        self.name = name
        self.age = age
        self.gender = gender

    def about_me(self):
        print('저의 이름은', self.name, '이고요, 제나이는', str(self.age), '살입니다.')

class Employee(Person):
    def __init__(self, name, age, gender, salary, hire_date):
        super().__init__(name, age, gender)
        self.salary = salary
        self.hire_date = hire_date

    def do_work(self):
        print('열심히 일을 한다.')

    def about_me(self):
        super().about_me()
        print('제급여는', self.salary,'원이고, 제 입사일은',self.hire_date,'입니다.')