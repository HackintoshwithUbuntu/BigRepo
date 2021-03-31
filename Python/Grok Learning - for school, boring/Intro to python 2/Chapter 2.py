KEYPAD = {
    'A': '2', 'B': '2', 'C': '2', 'D': '3', 'E': '3',
    'F': '3', 'G': '4', 'H': '4', 'I': '4', 'J': '5',
    'K': '5', 'L': '5', 'M': '6', 'N': '6', 'O': '6',
    'P': '7', 'Q': '7', 'R': '7', 'S': '7', 'T': '8',
    'U': '8', 'V': '8', 'W': '9', 'X': '9', 'Y': '9',
    'Z': '9',
}
word = input("Enter word: ")
letters = list(word)
for letter in letters:
  print(KEYPAD[letter], end="")
print("")




dictionary = {}
line = input('Name and colour: ')
while line:
  name, number = line.split()
  dictionary[name] = number
  line = input('Name and colour: ')
for nameKey in dictionary:
  print(nameKey, dictionary[nameKey])





carsDict = {}
Car = input("Car: ")
while Car:
  if Car in carsDict:
    carsDict[Car] = carsDict[Car] + 1
  else:
    carsDict[Car] = 1
  Car = input("Car: ")
for carKey in carsDict:
  print("Cars that are " + carKey + ": " + str(carsDict[carKey]))





wordsDict = {}
finalDict = {}
sentence = input("Enter line: ").split()
while sentence:
  for testloop in range(len(sentence)):
    if sentence[testloop] in wordsDict:
      wordsDict[sentence[testloop]] = wordsDict[sentence[testloop]] + 1
    else:
      wordsDict[sentence[testloop]] = 1
  finalDict.update(wordsDict)
  sentence = input("Enter line: ").split()
for fdCounter in sorted(finalDict):
  print(fdCounter, finalDict[fdCounter])