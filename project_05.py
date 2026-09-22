# // Simple Calculator (+, -, *, / with if-else)

a = int(input("Enter first nubmer : "))
b = int(input("Enter second nubmer : "))
op = str(input("Enter operator (+ - * /) : "))

if op == '+':
    print("Your addition is : ",a+b)
elif op == '-':
    print("Your substraction is : ",a-b)
elif op == '*':
    print("Your multplication is : ",a*b)
elif op == '/':
    if b == 0:
        print("erroe,cannot dividev by zero!")
    else:
        print("Your division is : ",a/b)

else:
    print("Invalid operator please select valid operator!")

