print("SELECT OPERATOR \n 1.ADDITION \n 2.SUBTRACTION \n 3.MULTIPLICATION")
opreator=input("enter a operator  +  -  *  : ")
num1= int(input("enter frist number : "))
num2= int(input("enter second number : "))

if opreator=="+":
    result=num1+num2
elif opreator=="-":
    result=num1-num2
elif opreator=="*":
    result=num1*num2

else:
    result="invalide operater"
print(f"Result -->\n{num1} {opreator} {num2} = {result}")
