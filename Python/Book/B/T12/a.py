from rand import randomInt
from quickSort import quickSort
from toSet import toSet
from binarySearch import binarySearch
from random import randint

La = []
Lb = []
randomInt(La, Lb, randint(10, 1000))
La = quickSort(La, 0, len(La) - 1)
Lb = quickSort(Lb, 0, len(Lb) - 1)
La = toSet(La)
Lb = toSet(Lb)

resultSet = []
for i in Lb:
    if(binarySearch(La, i) != -1):
        resultSet.append(i)

print("A = " + str(La))
print("B = " + str(Lb))
print("A ∩ B = " + str(resultSet))

