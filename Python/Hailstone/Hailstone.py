
def Hailstone(n):
    if (n <= 1):
        return set(["1"])
    elif (n % 2 == 0):
        return set([str(n)]).union(Hailstone(int(n / 2)))
    elif (n % 2 == 1):
        return set([str(n)]).union(Hailstone(int(3 * n + 1)))

if __name__ == "__main__":
    print(Hailstone(27))