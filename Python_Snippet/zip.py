numbers = [1, 2, 3]
letters = ["A", "B", "C"]
for pair in zip(numbers, letters):
    print(pair, type(pair))
print(zip(numbers, letters), type(zip(numbers, letters)))
print(list(zip(numbers, letters)))
