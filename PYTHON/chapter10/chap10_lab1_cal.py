class Calculator:
    def sum(self, num1, num2):
        return num1 + num2

    def minus(self, num1, num2):
        return num1 - num2

    def multiply(self, num1, num2):
        return num1 * num2

    def divide(self, num1, num2):
        return num1 / num2


calc = Calculator()
print(calc.sum(10,5))
print(calc.minus(10,5))
print(calc.multiply(10,5))
print(calc.divide(10,5))