def quickSort(L, low, high):
    l = low
    h = high
    if(l >= h):
        return L
    key = L[l]
    while l < h:
        while l < h and L[h] >= key:
            h -= 1
        L[l] = L[h]
        while l < h and L[l] <= key:
            l += 1
        L[h] = L[l]
    L[l] = key
    quickSort(L, low, l - 1)
    quickSort(L, h + 1, high)
    return L
