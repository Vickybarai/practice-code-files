#2.3.5.7.9.11.13.19.23
cnt=0
output=[]
for i in range(1,101):
    for j in range(1,101):
        if i%j==0:
            cnt+=1
    if cnt==2:
       output.append(i)
    cnt=0
print(f"output->{output}")