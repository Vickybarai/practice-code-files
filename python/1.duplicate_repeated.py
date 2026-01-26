lis=[1,2,3,4,5,6,7,4,3,7,0,9]
output=[]
repeated=[]
cnt=0
for i in lis:
    for j in lis:
        if i==j:
            cnt+=1
    if cnt==1 and i  not in output:
        output.append(i)
    else:
        repeated.append(i)
    cnt=0
print(f"output->{output}\nrepeated->{repeated}\n")








# lis=[1,2,3,2,3,4,5,5,6]
# output=[]
# cnt=0
# for i in lis:
#     for j in lis:
#         if i == j:        
#             cnt+=1
#     if cnt==1 and i not in output:
#             output.append(i)
#     cnt=0
# # output=list(set(lis))
# print(f"output {output}")