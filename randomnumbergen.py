import random

decide = random.randint(1, 10)
number = ''
guess = int(input("What number do you guess? (1 - 10) Type here:").lower())

if decide == 1:
    number = 1
elif decide == 2:
    number = 2
elif decide == 3:
    number = 3
elif decide == 4:
    number = 4
elif decide == 5:
    number = 5
elif decide == 6:
    number = 6
elif decide == 7:
    number = 7
elif decide == 8:
    number = 8
elif decide == 9:
    number = 9
else:
    number = 10

if guess == number:
    print("You guessed correctly; the number was", number)
elif guess > number:
    print("Sorry, the number you guessed was too high. The number was", number)
else:
    print("Sorry, the number you guessed was too low. The number was", number)
