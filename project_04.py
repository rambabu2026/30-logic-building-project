# Temperature Converter (Celsius ↔ Fahrenheit)

print("         ___MENU___")
print("1 Convert Celsius to  Fahrenheit ")
print("2 Convert Fahrenheit to  Celsius ")
choice = int(input("Press 1 and 2 : "))

if(choice == 1):
    celsius = float(input("Enter your Celsius : "))
    print("Your Fahrenheit is : ",((celsius * 9/5) + 32))
elif(choice == 2):
        fahrenheit = float(input("Enter your Fahrenheit : "))
        print("Your Celsius is : ",((fahrenheit - 32) * 5/9))
else:
      print("Invalid choice! Please enter 1 or 2.")