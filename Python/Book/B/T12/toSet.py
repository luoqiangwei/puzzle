from quickSort import quickSort

def toSet(L):
    quickSort(L, 0, len(L) - 1)
    l = 100000000000
    i = 0
    while True:
        if(i >= len(L)):
            break
        if(L[i] == l):
            L.pop(i) 
            i -= 1
        if(L[i] != l):
            l = L[i]
        i += 1
    return L


