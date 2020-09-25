# ikr this is weird
# a word processor made in python entirely i

def mainAppCommand():
    quitCommand = False
    while quitCommand == False:
        print ("")
        print ("Please enter a file name, a valid one to open it: ")
        fileName = raw_input(">")
        f = open(fileName, "a")
        print ("Please type R to read this file, or type W to write this file. Type X to exit. Upper case or lower case does not matter.")
        fileCommand = raw_input(">")
        if fileCommand == "R" or fileCommand == "r":
            openr = open(fileName, "r")
            print (openr.read())
            mainAppCommand()
        elif fileCommand == "W" or fileCommand == "w":
            openf = open(fileName, "w")
            writeContents = raw_input(">")
            openf.write(writeContents)
            mainAppCommand()
        elif fileCommand == "x" or fileCommand == "X":
            quitCommand = True
        else:
            print ("Invalid command. Please type W, w, R or r")
            mainAppCommand()

    if quitCommand == True:
        homeScreen()
            
        


def creditsApp():
    print ("")
    print ("Worder Version Alpha 1.1")
    print ("Created by Jun Ian. Tested with various computers and operating systems")
    print ("The source code is available on Github: https://github.com/pixdoet/Random-Code/blob/master/worder.py")
    print ("Thank you for using Worder! Updates will be available as soon as I'm free")
    print ("Suggest updates by emailing to interexchangesss@gmail.com or messaging me on Facebook: Jun Ian")
    homeScreen()
    
def homeScreen():
    print ("")
    print ("Simple Word Processor Version 1.1")
    print ("Copyright (C) 2020 Jun Ian. Not copyrighted actually")
    print ("Written in Python 2.7")
    print ("Report issues by private messaging me on Facebook Messenger: Jun Ian")
    uiCmd = raw_input("Please enter a command, type help for a list of commands: ")
    if uiCmd == "help":
        print ("Type start to start word processing!")
        print ("Type credits to view credits!")
        print ("Type exit to exit help and return to the home screen")
        helpCmd = raw_input(">")
        if helpCmd == "exit":
            homeScreen()
        elif helpCmd == "credits":
            creditsApp()
        elif helpCmd == "start":
            mainAppCommand()
        else:
            homeScreen()
    elif uiCmd == "start":
        mainAppCommand()
    elif uiCmd == "credits":
        creditsApp()
    elif uiCmd == "exit":
        quit()
    else:
        homeScreen()

homeScreen()

# the source code does not compile. I need help
# created by jun ian on 25 sept 2020. uploaded on 2247 GMT +8
