import pandas as pd
import openpyxl
import sendmail


path = "Book1.xlsx"
pf = pd.read_excel(path)

print("1--->CI")
print("2--->Python")
print("3--->DM")

subject = int(input("Enter Subject: "))

if subject == 2:
    subject = 3
elif subject == 1:
    subject = 2
elif subject == 3:
    subject = 4
elif subject > 3:
    print("Wrong input")
    exit()

absent = input("Enter 1 if student is absent: ")
if absent != "1":
    print("Student is not absent")
    exit()


column = int(input("Enter roll no: "))
column -= 1


def getvalue(row, fcolumn):
    value = pf.iat[row, fcolumn]
    return value


recentabsent = getvalue(int(column), int(subject))

email = getvalue(column, 1)


def change_value(row_ind, subjectnum, fnewvalue):

    row_index = row_ind
    column_index = subjectnum
    newvalue = fnewvalue + 1
    if int(newvalue) == 2:
        sendmail.onemoreemail(email)
    elif int(newvalue) == 3:
        sendmail.nomoreemail(email)

    pf.iat[row_index, column_index] = newvalue
    return newvalue


nvalue = change_value(int(column), int(subject), int(recentabsent))

with pd.ExcelWriter(path, engine='openpyxl', mode='a', if_sheet_exists='replace') as writer:
    pf.to_excel(writer, index=False, sheet_name='Sheet1')


print("saved!")
if int(nvalue) == 2:
    print(f"Email sent to {email}")
elif int(nvalue) == 3:
    print(f"Email sent to {email}")
