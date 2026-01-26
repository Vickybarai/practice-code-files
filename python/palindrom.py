name=input("enter a name :")
def check(x):
    if x [::-1] == x:
        return "its palindrome"
    else:
        return "its not palindrome"
print(check(name))