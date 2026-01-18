num=int(input("Enter a Number : "))

num1=(input("SELECT TO CONVRT IN:\n 1.kilometer 2.Miles \nEnter a Number 1,2: "))
con=0.621371
if num1=="1":
    print(f"kilometers: {num*con}")
if num1=="2":
    print(f"Miles: {num*con}")
#wrong coding