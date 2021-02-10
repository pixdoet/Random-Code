# If you are using gmail, make sure that
# Access for less secure apps is ON

# I am not responsible for any damage that this program may do

# Written by Jun Ian(wok#9607)


# imports
import smtplib
import ssl

port = 587 # ssl port
smtp_server = "smtp.gmail.com" # change if not using Gmail
sender_email = "*gmail_address@gmail.com" # replace with your email address
receiver_email = "*@gmail.com" # replace with your receiver's email address
password = "*" # password of your email address
message = """\
Subject: *subject*

*content"""

context = ssl.create_default_context()
# main function
def sendMail():
    with smtplib.SMTP(smtp_server, port) as server:
        server.ehlo()
        server.starttls(context=context)
        server.ehlo()
        server.login(sender_email, password)
        server.sendmail(sender_email, receiver_email, message)

# while x is smaller than 50,
# do function sendMail()
x = 0
while x <= 50:
    sendMail()
    x += 1

