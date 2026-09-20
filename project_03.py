# Simple Interest Calculator

principal = float(input("Enter your principal amount : "))
rate = float(input("Enter your Rate of interest : "))
time = float(input("Enter your Time (in year) : "))

interest = ((principal * rate * time) / 100)
print("Your interest is : ", interest)
print("Your total amount is : ", principal + interest)