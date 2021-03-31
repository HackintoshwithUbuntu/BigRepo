words = {}
engList = []
final = []
for line in open('dictionary.txt'):
  english, Aboriginal = line.rstrip().split(',')
  words[english] = Aboriginal

engLine = input("English: ")
while engLine:
  engList = engLine.split()
  for word in engList:
    final.append(words[word])
  for counter in range(len(final)-1):
    print(final[counter], end = ' ')
  try:
    print(final[counter+1])
  except:
    print(final[0])
  final = []
  engLine = input("English: ")






Dict = {}
score = 0
file = open('scrabble_letters.txt').read().rstrip().split("\n")
for line in file:
  temp = line.split()
  Dict[temp[1]] = int(temp[0])

letters = list(input("Word: ").upper())
for letter in letters:
  score = score + Dict[letter]
print(score, "points")






import csv
with open('nominees.csv', newline='') as f: 
  winner = input('Winning title: ')
  for line in csv.DictReader(f):
    if line['title'] == winner:
      print('Congratulations:', line['director(s)'])






classlist = open('classlist.txt').read().lower().split('\n')
used = []
counter = 0
for name in classlist:
  try:
    first, *middle, last = name.split()
    if first + ''.join(middle) not in used:
      used.append(first + ''.join(middle))
    else:
      name = first + ''.join(middle) + last[0]
      if name not in used:
        used.append(name)
      else:
        while True:
          counter = counter + 1
          if first + ''.join(middle) + last[0] + str(counter) not in used:
            used.append(first + ''.join(middle) + last[0] + str(counter))
          break
  except:
    pass
for username in used:
  print(username)
