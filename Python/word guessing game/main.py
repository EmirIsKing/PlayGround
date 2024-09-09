import random


def main():
    words = ['rainbow', 'computer', 'science', 'programming',
             'python', 'mathematics', 'player', 'condition',
             'reverse', 'water', 'board', 'geeks']

    print("word guessing game")
    guessword = random.choice(words)
    guessed = ["_"] * len(guessword)
    turns = int(12)
    while turns != 0:
        print(f"You have {turns} tries")
        print("".join(guessed))
        if "_" not in guessed:
            print("You won!")
            print(f"The word is {guessword}")
            return
        userchar = input("Enter 1 alphabet: ").lower()

        if len(userchar) != 1:
            print("Enter a single alphabet")
            continue

        for i, char in enumerate(guessword):
            if char == userchar:
                guessed[i] = userchar

        if userchar not in guessword:
            turns -= 1

    if turns == 0:
        print("You lost")
        print(f"The word was {guessword}")


if __name__ == '__main__':
    main()
