from random import randint
from math import log

def randomInt(L1, L2, num):
    for i in range(0, num):
        L1.append(randint(0, 1000))
    for i in range(0, int(log(num))):
        L2.append(randint(0, 1000))

