import random
numbers = []


def lose():
    print("Computer Wins!!!")
    exit(0)


def nearestMultiple(num):
    near = num + (4 - (num % 4))
    return near


def check(xyz):
    i = 1
    while i < len(xyz):
        if (xyz[i]-xyz[i-1])!= 1:
            return False
        i = i + 1
    return True


def start():
    print("21 Number game")
    print("Do you want to start the game? (Yes/No)")
    Start = input("> ").lower()
    if Start == 'yes':
        print("Enter 'F' to take the first chance.\nEnter 'S' to take the second chance.")
        playerturn = input("> ").lower()
        if playerturn == 's':
            comp = 1

            last = 0
            while last < 20:

                j = 1
                while j <= comp:
                    numbers.append(last + j)
                    j += 1
                    if last == 20:
                        print("Computer wins!!!")
                        exit(0)

                print("Numbers after computer's turn:")
                print(numbers)

                inp = 0
                if numbers[-1] == 20:
                    lose()
                else:
                    inp = int(input("How many numbers do you wish to enter: "))
                    if inp > 3:
                        inp = 3
                i = 0
                while i != inp:
                    num = int(input("> "))
                    numbers.append(num)
                    i += 1

                    if not check(numbers):
                        lose()
                last = numbers[-1]

                if last == 20:
                    print("You win!!!")

                comp = random.randint(1, 3)
        elif playerturn == 'f':
            last = 0
            while last < 20:
                inp = int(input("How many numbers do you wish to enter: "))
                if inp > 3:
                    inp = 3
                i = 0
                while i != inp:
                    num = int(input("> "))
                    numbers.append(num)
                    i += 1

                    if not check(numbers):
                        lose()
                last = numbers[-1]

                if last == 20:
                    print("You win!!!")
                    exit(0)

                comp = nearestMultiple(last)
                if comp > 3:
                    comp = 3

                j = 1
                while j <= comp:
                    numbers.append(last + 1)
                    j += 1
                    last = numbers[-1]
                    if last == 20:
                        print("Numbers after computer's turn:")
                        print(numbers)
                        print("Computer wins!!!")
                        exit(0)

                print("Numbers after computer's turn:")
                print(numbers)
    elif Start == 'no':
        exit(0)


if __name__ == '__main__':
    start()
