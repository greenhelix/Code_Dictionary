listA = set([1, 2, 3])
listB = set([2, 3, 4])
tupleA = set((1, 2, 3))
tupleB = set((2, 3, 4))
setA = {1, 2, 3}
setB = {2, 3, 4}

print(f'list:{listA | listB}, tuple: {tupleA | tupleB}, set: {setA | setB}')
print(f'list:{listA & listB}, tuple: {tupleA & tupleB}, set: {setA & setB}')
print(f'list:{listA - listB}, tuple: {tupleA - tupleB}, set: {setA - setB}')
print(f'list:{listA ^ listB}, tuple: {tupleA ^ tupleB}, set: {setA ^ setB}')
