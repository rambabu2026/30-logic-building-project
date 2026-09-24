# Reverse a Number
reversed_num = 0
n = int(input("Enter n number : "))

while n > 0:
    last_digits = (n % 10)
    reversed_num = (reversed_num * 10) + last_digits
    n = n // 10

print(reversed_num)
