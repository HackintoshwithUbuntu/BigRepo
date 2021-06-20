'''
degen = []
for x in range(9999):
    seed = x
    sequence = []
    cycle = -1
    sequence.append(seed)
    for i in range(100):
        square = (seed * seed) + 2222
        digua = str(square).zfill(8)[2:6]
        seed = int(digua)
        if seed in sequence:
            index = sequence.index(seed)
            cycle = i + 1 - index
            if cycle == 1:
                if seed not in degen:
                    degen.append(seed)
            break
        sequence.append(seed)
    
print(degen)
'''
'''
degen = []
maxx = 0
store = 0
for x in range(9999):
    seed = x
    sequence = []
    cycle = -1
    sequence.append(seed)
    for i in range(100):
        square = (seed * seed) + 2222
        digua = str(square).zfill(8)[2:6]
        seed = int(digua)
        if seed in sequence:
            index = sequence.index(seed)
            cycle = i + 1 - index
            if i + 1 > maxx:
                maxx = i + 1
                store = x
            break
        sequence.append(seed)
    
print(maxx)
print(store)
'''
maxx  = -1
for x in range(9999):
    seed = x
    sequence = []
    cycle = -1
    sequence.append(seed)
    for i in range(100):
        square = (seed * seed) + 2222
        digua = str(square).zfill(8)[2:6]
        seed = int(digua)
        if seed in sequence:
            index = sequence.index(seed)
            cycle = i + 1 - index
            maxx = max(cycle,maxx)
            break
        sequence.append(seed)

print(maxx)