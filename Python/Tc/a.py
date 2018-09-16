from random import randint

randomSet = []
for i in range(48, 58):
    randomSet.append(chr(i))

for i in range(65, 91):
    randomSet.append(chr(i))

for i in range(97, 123):
    randomSet.append(chr(i))

#print (randomSet)

num = int(input())
S = ""
for i in range(0, num):
    t = randint(0, len(randomSet) - 1)
    S += randomSet[t]

#print (S)

def fun(S):
    t = set(["()"])
    for i in range(0, len(S)):
        t = t.union(fun(S[:i] + S[i + 1:]))
    
    return t.union(set(["(" + S + ")"]))

print(fun(S))
