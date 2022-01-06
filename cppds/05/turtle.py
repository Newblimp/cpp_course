#Creates an inward spiral through recursion.

import turtle

def drawSpiral(myTurtle, lineLen):
    if lineLen > 0:
        myTurtle.forward(lineLen)
        myTurtle.right(90)
        drawSpiral(myTurtle,lineLen-5) #function makes recursive call.

def main():
    myTurtle = turtle.Turtle()
    myWin = turtle.Screen()
    drawSpiral(myTurtle,100)
    myWin.exitonclick()

main()
