# Number Guessing Game (random number vs user guess)

import random
secretNumber = random.randint(1,100)
attempts = 0
while True:
    userNumber = int(input("Enter guess number : "))
    attempts += 1
    if secretNumber == userNumber:
        print(f"Correct! Your guessed it in {attempts} attempts.")
        break
    elif secretNumber > userNumber:
        print("Too low, try again!")
    else:
        print("Too high, try again!")
