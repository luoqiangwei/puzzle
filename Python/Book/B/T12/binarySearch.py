def binarySearch(T, x):
    l = 0
    r = len(T) - 1
    while l < r:
        m = int((l + r) / 2)
        if(T[m] == x):
            return m
        elif(T[m] > x):
            r = m - 1
        else:
            l = m + 1
    return -1
