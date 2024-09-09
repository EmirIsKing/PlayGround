import smtplib


HOST = "smtp.gmail.com"
PORT = 587
FROM = "asiarosa324@gmail.com"
PASSWORD = "rghdaqrrmqrzvwsj"
MESSAGE = """subject: Class Attendance
Hello Student you have missed 2 class and have only 1 leave left"""

MESSAGE2 = """subject: Class Attendance
Hello Student you have missed 3 classes and will not be allowed to write the exam"""


def onemoreemail(email):
    to = email

    SMTP = smtplib.SMTP(HOST, PORT)
    SMTP.ehlo()
    SMTP.starttls()
    SMTP.login(FROM, PASSWORD)
    SMTP.sendmail(FROM, to, MESSAGE)
    SMTP.quit()


def nomoreemail(email):
    to = email

    SMTP = smtplib.SMTP(HOST, PORT)
    SMTP.ehlo()
    SMTP.starttls()
    SMTP.login(FROM, PASSWORD)
    SMTP.sendmail(FROM, to, MESSAGE2)
    SMTP.quit()
