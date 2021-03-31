tempset = set()
coords = input("Guess: ")
while coords:
  originalLength = len(tempset)
  tempset.add(coords)
  if originalLength == len(tempset):
    print("You've chosen that square already")
    coords = input("Guess: ")
  else:
    print("Hit", coords)
    coords = input("Guess: ")






enSet = set(open("english.txt").read().split())
frSet = set(open("french.txt").read().split())
both = enSet & frSet
for word in both:
  print(word)





line1 = input("Line: ").split()
mainSet = set(line1[1:])
lineOther = input("Line: ").split()
while lineOther:
  tempSet = set(lineOther[1:])
  mainSet = mainSet - tempSet
  lineOther = input("Line: ").split()
if mainSet:
  for temp in mainSet:
    print(temp, "is monolingual.")
else:
  print("Everyone is multilingual!")






line = input("Line: ").lower().split()
tupleStore = tuple()
dictionary = {}
dictionary2 = {}
counter2 = 0
while line:
  counter = 0
  for word in line:
    try:
      tupleStore = (line[counter], line[counter + 1])
    except(IndexError):
      counter = counter + 1
      break
    if tupleStore in dictionary:
      dictionary[tupleStore] = dictionary[tupleStore] + 1
    else:
      dictionary[tupleStore] = 1
    counter = counter + 1
  line = input("Line: ").lower().split()
for element in dictionary:
  if dictionary[element] > 1:
    dictionary2[element] = dictionary[element]
  counter2 = counter2 + 1
for element2 in dictionary2:
  print(" ".join(element2) + ": " + str(dictionary2[element2]))