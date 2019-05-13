def print_diagonal(n):
	i = 0;
	i2 = 0;

	if n <= i:
		print("")
	while i < n:
		while i2 < i:
			print("{}".format(" "), end="")
			i2 += 1
		print("{}".format("\\"))
		i2 = 0
		i += 1
print_diagonal(3)
print_diagonal(0)
print_diagonal(12)
print_diagonal(-98)
