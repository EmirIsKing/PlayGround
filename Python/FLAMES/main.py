
print("FLAMES")

firstName = input("Enter the first name: ").upper()
secondName = input("Enter the second name: ").upper()



flames = "FLAMES"

print(firstName)
print(secondName)

i = 0

for char1 in firstName:
    j = 0
    for char2 in secondName:
        if char1 == char2:
            firstName = firstName[:i] + firstName[i + 1:]
            secondName = secondName[:j] + secondName[j + 1:]
            i -= 1
        j += 1
    i += 1


count = len(firstName) + len(secondName)




length = len(flames)
i = 0
j = 1
while length != 1:
    if j == count:
        flames = flames[:i] + flames[i + 1:]
        length -= 1
        i -= 1
    if j > count:
        j = 1
    j += 1
    i = (i + 1) % length


if flames == 'F':
    print("Relationship status : Friendship")
elif flames == 'L':
    print("Relationship status : Love")
elif flames == 'A':
    print("Relationship status : Affection")
elif flames == 'M':
    print("Relationship status : Marriage")
elif flames == 'E':
    print("Relationship status : Enemy")
elif flames == 'S':
    print("Relationship status : Siblings")