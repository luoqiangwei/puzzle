def fun(L1, L2, L3):
    max = -1
    # store = [[[[0] * len(L1)] * len(L2)] * len(L3)]
    A = [0] * len(L2) * len(L3)
    B = [0] * len(L2) * len(L3)

    for i in range(0, len(L2)):
        for j in range(0, len(L3)):
            if i * i + j * j > 10:
                continue
            B[i * len(L3) + j] = L2[i] + L3[j]
            A[i * len(L3) + j] = i * i + j * j

    for i in range(0, len(L1)):
        for j in range(0, len(B)):
            if B[j] == 0:
                continue
            if A[j] + i * i > 10:
                continue
            if B[j] + L1[i] > max:
                max = B[j] + L1[i]

    return max

if __name__ == "__main__":
    G1 = [2, 4, 7, 11]
    G2 = [5, 10, 16, 20]
    G3 = [8, 12, 17, 22]

    print (fun(G1, G2, G3))