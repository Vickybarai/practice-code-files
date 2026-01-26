# 2
# def work(loop):
#     output1=[]
#     output2=[]
#     output3=[]
#     cnt=0    
#     for i in loop :
#         if i%2==0:
#             output1.append(i)
#         else:
#             output2.append(i)
#         for j in loop:
#             if i%j == 0:
#                 cnt+=1
#         if cnt==2 :
#             output3.append(i)
#         cnt=0 
#     return output3   
# result=work(range(1,11))        
# print(result)

# 1
# def calculate(x,z,operation):
#     if operation == "+" :
#         return x+z
#     elif operation == "-":
#         return x-z
#     elif operation == "*":
#         return x*z
#     elif operation == "%":
#         return x%z
#     else:
#         return "invalide operation"
# in1, in2 ,in3=input("""     1.ADDITION  2.SUBTRACTION  3.MULTIPLICATION 4.DIVISION
#     Frist Input & Second Input than Oprater \n [ +  -  *  %] --> ENTER : """).split(" ")
# # in1=int(input("enter frist input: "))
# # in2=int(input("enter second input: "))
# # in3=input("enter operation [+ , - , * , % ]:")
# print(f"your answer is : {calculate(int(in1),int(in2),in3)}")