import random


def main():
    print("Guessing Game0")
    print("You have 5 guess")
    minrange = int(input("Enter lowest range: "))
    maxrange = int(input("Enter highest range: "))
    minguess = 5

    guess = random.randint(minrange, maxrange)

    while minguess != 0:
        userguess = int(input("Enter your guess: "))
        if userguess != guess:
            print("Incorrect guess try again")
            minguess -= 1
            if userguess > guess:
                print("You guessed too high!")
            elif userguess < guess:
                print("You Guessed too low!")
            if minguess > 1:
                print("You have", minguess, "more chances")
            elif minguess == 1:
                print("You have", minguess, "more chance")
        else:
            print("You guessed right")
            return

    if minguess == 0:
        print("You are out of guess")
        return


if __name__ == '__main__':
    main()
    