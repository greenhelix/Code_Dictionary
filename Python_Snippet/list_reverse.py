# List reverse method -
A = [0, 10, 20, 40]
A.reverse()  # not print it

print(A)    # [40, 20, 10, 0]

b = [1, 2, 4, 3, 5]
# [5, 3, 4, 2, 1] You need to assign a new variable.
print(list(reversed(b)))
print(reversed(b))  # <list_reverseiterator object at 0x000002436A50D148>

array = [0, 10, 20, 40]
for i in reversed(array):
    print(i)

'''
40
20
10
0
'''
