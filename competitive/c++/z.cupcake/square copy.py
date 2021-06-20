'''
#first, 1731, second [31, 32, 33, 67, 68, 69, 9484], third 56, fourth 1656, fifth 3
seed = 2561
sequence = []
cycle = []
sequence.append(seed)
for i in range(100):
    square = (seed * seed) + 2222
    digua = str(square).zfill(8)[2:6]
    seed = int(digua)
    if seed in sequence:
        index = sequence.index(seed)
        cycle = sequence[index:]
    sequence.append(seed)
'''
'''
seed = 1656
sequence = []
cycle = -1
sequence.append(seed)
maxx = 0
for i in range(100):
    square = (seed * seed) + 2222
    digua = str(square).zfill(8)[2:6]
    seed = int(digua)
    if seed in sequence:
        index = sequence.index(seed)
        cycle = i + 1 - index
        maxx = max(i + 1,maxx)
        break
    sequence.append(seed)

print(maxx)

'''
'''
seed = 34
print(seed)
for i in range(100):
    square = (seed * seed) + 2222
    digua = str(square).zfill(8)[2:6]
    seed = int(digua)
    print(i+1, seed)
'''
seed = 1656
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
        break
    sequence.append(seed)


    
    


