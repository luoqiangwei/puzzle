from math import sqrt
input_number = int(input())

count = 1
for i in range(2, int(sqrt(input_number)) + 2):
    if(input_number % i == 0):
        count += i

if(count == input_number):
    print("YES")
else:
    print("NO")
    
