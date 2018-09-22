from quickSort import quickSort

x = input()
bagAgoods = x.split(' ')
#print (bagAgoods)

goods = []
output = []

for i in range(0, int(bagAgoods[0])):
    output.append(float(0))

for i in range(0, int(bagAgoods[0])):
    t = input()
    t = t.split(' ')
    t[1] = int(t[1]) / int(t[2])
    goods.append(t)

# print (goods)
goods = quickSort(goods, 0, len(goods) - 1)
# print (goods)

for i in range(int(bagAgoods[0]) - 1, -1, -1):
    if(int(bagAgoods[1]) > int(goods[i][2])):
        output[int(goods[i][0]) - 1] = 1.00
        bagAgoods[1] = int(bagAgoods[1]) - int(goods[i][2])
    else:
        print(int(bagAgoods[1]))
        print(goods[i][2])
        output[int(goods[i][0]) - 1] = int(bagAgoods[1]) / int(goods[i][2])
        break

for i in range(0, len(output)):
    print ("%.2f" % output[i], end=" ")