# Reverse a Number
reverse_num = 0
n = int(input("Enter n number : "))
while n > 0:
    last_digit = n % 10
    reverse_num = (reverse_num * 10) + last_digit
    n = n // 10
print(reverse_num)
