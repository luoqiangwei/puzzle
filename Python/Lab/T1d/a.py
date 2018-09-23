num = int(input())
#print(list(range(1, num + 1)))
stack0 = list(range(1, num + 1))

bug = 0
all = []
stack = []
n = 0

def swap(a, b):
	t = a
	a = b
	b = t

def perm(list, k, m):
	global n
	if (k > m):
		all.append(list)
		n += 1
	else:
		for i in range(k, m + 1):
			swap(list[k], list[i])
			perm(list, k + 1, m)
			swap(list[k], list[i])

