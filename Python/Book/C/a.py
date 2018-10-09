def fun(L1, L2, L3, max):
    max = 0
    for i in range(0, len(L1)):
        for j in range(0, len(L2)):
            for z in range(0, len(L3)):
                if i * i + j * j + z * z <= 10 and L1[i] + L2[j] + L3[z] > max:
                    max = L1[i] + L2[j] + L3[z]
    return max


if __name__ == "__main__":
    G1 = [2, 4, 7, 11]
    G2 = [5, 10, 16, 20]
    G3 = [8, 12, 17, 22]    

    print (fun(G1, G2, G3, 10))