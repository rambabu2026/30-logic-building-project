# Sum of Digits of a Number


n = int(input("Enter a digits of a number : "))
sum = 0
while n > 0:
    last_digit = n % 10
    sum = sum + last_digit
    n = n // 10
print("Your total sum is : " , sum)