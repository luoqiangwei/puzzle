page = int(input())
countStr = ['1', '2', '3', '4', '5', '6', '7', '8', '9', '0']
count = [0, 0, 0, 0, 0, 0, 0, 0, 0, 0]

while page != 0:
    s = str(page)
    for i in s:
        if(i == '1'):
            count[0] += 1
        elif(i == '2'):
            count[1] += 1
        elif(i == '3'):
            count[2] += 1
        elif(i == '4'):
            count[3] += 1
        elif(i == '5'):
            count[4] += 1
        elif(i == '6'):
            count[5] += 1
        elif(i == '7'):
            count[6] += 1
        elif(i == '8'):
            count[7] += 1
        elif(i == '9'):
            count[8] += 1
        elif(i == '0'):
            count[9] += 1
    page -= 1

print (countStr)
print (count)
