import random
print("WELCOME TO ROCK PAPER SCISSORS GAME ")
p1=0;p2=0
while(p1!=5 and p2!=5):
    inp1=input(" CHOOSE R FOR 'ROCK' P FOR 'PAPER' AND S FOR 'SCISSOR' ")
    comp = random.choice('RPS')
    
    if(ord(inp1)==82 and ord(random.choice(comp))==82):
        print("YOUR RESPONSE", inp1)
        print("COMP RESPONSE",comp)
        print("MATCH IS TIE")
        print("SCORE OF USER = ", p1)
        print("SCORE OF COMP = ", p2)
    elif(ord(inp1)==80 and ord(random.choice(comp))==80):
        print("YOUR RESPONSE", inp1)
        print("COMP RESPONSE",comp)
        print("MATCH IS TIE")
        print("SCORE OF USER = ", p1)
        print("SCORE OF COMP = ", p2)
    elif(ord(inp1)==83 and ord(random.choice(comp))==83):
        print("YOUR RESPONSE", inp1)
        print("COMP RESPONSE",comp)
        print("MATCH IS TIE")
        print("SCORE OF USER = ", p1)
        print("SCORE OF COMP = ", p2)
    elif(ord(inp1)==82 and ord(random.choice(comp))==83):
        print("YOUR RESPONSE", inp1)
        print("COMP RESPONSE",comp)
        print("POINT GOES TO YOU BRAVO!!!")
        p1=p1+1
        print("SCORE OF USER = ", p1)
        print("SCORE OF COMP = ", p2)
    elif(ord(inp1)==83 and ord(random.choice(comp))==82):
        print("YOUR RESPONSE", inp1)
        print("COMP RESPONSE",comp)
        print("POINT GOES TO COMP!!!")
        p2=p2+1
        print("SCORE OF USER = ", p1)
        print("SCORE OF COMP = ", p2)
    elif(ord(inp1)==80 and ord(random.choice(comp))==82):
        print("YOUR RESPONSE", inp1)
        print("COMP RESPONSE",comp)
        print("POINT GOES TO YOU BRAVO!!!")
        p1=p1+1
        print("SCORE OF USER = ", p1)
        print("SCORE OF COMP = ", p2)
    elif(ord(inp1)==82 and ord(random.choice(comp))==80):
        print("YOUR RESPONSE", inp1)
        print("COMP RESPONSE",comp)
        print("POINT GOES TO COMP!!!")
        p2=p2+1
        print("SCORE OF USER = ", p1)
        print("SCORE OF COMP = ", p2)
    elif(ord(inp1)==83 and ord(random.choice(comp))==80):
        print("YOUR RESPONSE", inp1)
        print("COMP RESPONSE",comp)
        print("POINT GOES TO YOU BRAVO!!!")
        p1=p1+1
        print("SCORE OF USER = ", p1)
        print("SCORE OF COMP = ", p2)
    elif(ord(inp1)==80 and ord(random.choice(comp))==83):
        print("YOUR RESPONSE", inp1)
        print("COMP RESPONSE",comp)
        print("POINT GOES TO COMP!!!")
        p2=p2+1
        print("SCORE OF USER = ", p1)
        print("SCORE OF COMP = ", p2)     
if(p1==5):
    print("CONGRATULATIONS YOU WON THE MATCH ")
    print("THANK YOU FOR PLAYING")
elif(p2==5):
    print("LOOSER HAHA TRY AGAIN AND BE PREPARED")
    print("THANK YOU FOR PLAYING, BUT STILL A LOOSER! HAHA")
    
    
    
