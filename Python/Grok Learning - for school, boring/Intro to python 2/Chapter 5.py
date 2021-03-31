size = int(input('Grid size: '))
map = []
for column in range(size):
  currentRow = []
  for row in range(size):
    currentRow.append('.')
  map.append(currentRow)
map[0][0] = 'x'
for row in map:
  for counter in row:
    print(counter, end = '')
  print()
#above creates and prints the grid, stored in var 'map'
location = (0,0)
Dir = input('Direction: ')
while Dir:
  if Dir == 'right':
    location = (location[0] + 1, location[1])
  elif Dir == 'left':
    location = (location[0] - 1, location[1])
  elif Dir == 'up':
    location = (location[0], location[1] - 1)
  else:
    location = (location[0], location[1] + 1)
  map[location[1]][location[0]] = 'x'
  for row in map:
    for counter in row:
      print(counter, end = '')
    print()
  Dir = input('Direction: ')





flavours = {}
line = input('Name:vote ')
while line:
  name, flavour = line.split(':')
  if flavour not in flavours:
    # add it to our dictionary as a list with one element
    flavours[flavour] = [name]
  else:
    flavours[flavour].append(name)
  line = input('Name:vote ')

for flavour in flavours:
  print(flavour , len(flavours[flavour]), 'vote(s):', ' '.join(flavours[flavour]))




RULES = {
  ('scissors','paper'):'cut',
  ('paper','rock'):'covers',
  ('rock','lizard'):'crushes',
  ('lizard','spock'):'poisons',
  ('spock','scissors'):'melts',
  ('scissors','lizard'):'decapitate',
  ('lizard','paper'):'eats',
  ('paper','spock'):'disproves',
  ('spock','rock'):'vaporizes',
  ('rock','scissors'):'breaks',
}

hand1 = input('Hand 1: ')
hand2 = input('Hand 2: ')
if hand1 == hand2:
  print("Tie")
else:
  hands = (hand1, hand2)
  try:
    print(hand1.title(), RULES[hands], hand2.title())
  except(KeyError):
    hands2 = (hand2, hand1)
    print(hand2.title(), RULES[hands2], hand1.title())





file = open('novel.txt').read().split()
Dict = {}
List = []
for word in file:
  if word[0].isupper() == True:
    if word not in Dict:
      Dict[word]=1
    else:
      Dict[word] = Dict[word] + 1
for name in sorted(Dict, key=Dict.get):
  List.append((name, Dict[name]))
List.reverse()
print(List[0][1], List[0][0])
print(List[1][1], List[1][0])
print(List[2][1], List[2][0])






