num = int(input())
#print(list(range(1, num + 1)))
stack0 = list(range(1, num + 1))

bug = 0
stack = []

while True:
	result = ""
	for i in range(0, len(stack)):
		stack.push(stack0[i])
		result += stack.pop(0) + " "
	print(result)
	