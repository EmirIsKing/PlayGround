import os


def checker(player1, pGuess):
    i = 0
    checkerCount = 0
    while i < len(player1):
        if pGuess[i] == player1[i]:
            checkerCount += 1
        i += 1
    return checkerCount


player1 = ""
player2 = ""
player1Tries = 0
player2Tries = 0

print("Mastermind Game")
print("\nPlayer 1's turn to set number")
player1 = input("Enter your number: ")

os.system('cls')
print(f"\rPlayer 2's turn to guess")
pGuess = ['x'] * len(player1)
print(pGuess)

check = 0

while check != len(player1):

    p2Guess = input("Enter your guess: ")

    for i, num in enumerate(p2Guess):
        if num == player1[i]:
            pGuess[i] = num

    check = checker(player1, pGuess)
    print(pGuess)
    player2Tries += 1

print("\nPlayer 2's turn to set number")


player2 = input("Enter your number: ")
os.system('cls')

print(f"\rPlayer 1's turn to guess")

pGuess2 = ['x'] * len(player2)

check = 0
print(pGuess2)
while check != len(player2):
    p1Guess = input("Enter your guess: ")

    for i, num in enumerate(p1Guess):
        if num == player2[i]:
            pGuess2[i] = num

    check = checker(player2, pGuess2)
    print(pGuess2)
    player1Tries += 1

if player1Tries > player2Tries:
    print("\n")
    print(f"Player 2 is the Mastermind!!!\nWith only {player2Tries} tries")
elif player2Tries > player1Tries:
    print("\n")
    print(f"Player 1 is the Mastermind!!!\nWith only {player1Tries} tries")
elif player1Tries == player2Tries:
    print("\n")
    print(f"A Draw!!!\nWith {player1Tries} tries each")







