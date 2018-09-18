from math import sqrt
input_number = int(input())

def fun(input_number, num):
    if(num == 1):
        return 1
    if(input_number % num == 0):
        return num + fun(input_number, num - 1)
    else:
        return fun(input_number, num - 1)

if(fun(input_number, int(sqrt(input_number)) + 1) == input_number):
    print("YES")
else:
    print("NO")
    
