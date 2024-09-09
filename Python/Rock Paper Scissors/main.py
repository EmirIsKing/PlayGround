import random

print("Rock Paper Scissors")

choices = ["rock", "paper", "scissors"]

userChoice = input("Choose your choice: ")

print(userChoice)

if userChoice == "rock" or userChoice == "paper" or userChoice == "scissors":

    choices.remove(userChoice)

    compsChoice = random.choice(choices)



    print(f"{compsChoice} vs {userChoice}")
    if compsChoice == 'rock' and userChoice == 'paper':
        print("You Win!!!")
    elif compsChoice == 'rock' and userChoice == 'scissors':
        print("Computer Win!!!")
    elif compsChoice == 'paper' and userChoice == 'scissors':
        print("You Win!!!")
    elif compsChoice == 'paper' and userChoice == 'rock':
        print("Computer Wins!!!")
    elif compsChoice == 'scissors' and userChoice == 'rock':
        print("You Win!!!")
    elif compsChoice == 'scissors' and userChoice == 'paper':
        print("Computer Wins!!!")

else:
    print("Incorrect Choice")
    exit(0)