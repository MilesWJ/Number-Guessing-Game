import random
from guess import Guess


def guess_the_number():

    Guess.number = random.randint(1, 100)

    tries = 1

    while True:

        Guess.guess = abs(int(input("\nGuess a number between 1 - 100: ")))   

        if Guess.guess == Guess.number:
            print("\nYou guessed the number correctly! The number was:", Guess.number)
            print(f"It took you {tries} tries.")
            break
        
        elif Guess.guess > Guess.number:
            print("\nYour guess was too high...")
            tries += 1
            continue
        
        elif Guess.guess < Guess.number:
            print("\nYour guess was too low...")
            tries += 1
            continue


guess_the_number()
