# ikr this is weird
# a word processor made in python entirely i

def mainApp():
    quitToHome = False
    while quitToHome == False:
        fileName = raw_input("Please enter a file name, a valid one to open it: ")
        f = open(fileName, "a")
        inputText = raw_input("Please enter the contents of your text: ")
        if inputText == "commandExit":
            quitToHome = True
        f.write(inputText)

    if quitToHome == True:
        f.close()
        homeScreen()



def creditsApp():
    print ("Worder version alpha 1.0")
    print ("Created by Jun Ian. Tested with various computers and operating systems")
    print ("The source code is available on Github: https://github.com/pixdoet/random_code/worder.py")
    print ("Thank you for using Worder. Updates will be available as soon as I'm free")
    print ("Suggest updates by emailing to interexchangesss@gmail.com or messaging me on Facebook: Jun Ian")
    homeScreen()
    
def homeScreen():
    print ("Simple Word Processor Version 1.0")
    print ("Copyright (C) 2020 Jun Ian. Not copyrighted actually")
    print ("Written in Python 2.7")
    print ("Report issues by private messaging me on Facebook Messenger: Jun Ian")
    uiCmd = raw_input("Please enter a command, type help for a list of commands: ")
    if uiCmd == "help":
        print ("Type start to start word processing!")
        print ("Type credits to view credits!")
        print ("Type exit to exit help and return to the home screen")
        helpCmd = raw_input("Command: ")
        if helpCmd == "exit":
            homeScreen()
        elif helpCmd == "credits":
            creditsApp()
        elif helpCmd == "start":
            mainApp()
        else:
            homeScreen()
    elif uiCmd == "start":
        mainApp()
    elif uiCmd == "credits":
        creditsApp()
    elif uiCmd == "exit":
        quit()
    else:
        homeScreen()

homeScreen()



        
        
