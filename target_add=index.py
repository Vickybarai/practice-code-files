l1=[1,2,4,7,15,11]
target=int(input("enter target number= "))
# target=int(6)
index=[]
for i in range(len(l1)):
    for j in range(i+1,len(l1)):
        if l1[i]+l1[j]==target:
            index.append(l1[i])
            index.append(l1[j])
            add1=l1[i]
            add2=l1[j]
print(f"{index}index position = {add1} + {add2} = addition is ==>{target}")


"""
error face
1. only i & j print loop position 
2. l1(i) print last position
3. l1[i] in print =  print last position 

"""