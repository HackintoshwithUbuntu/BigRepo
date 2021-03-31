number1 = int(input("Number 1: "))
number2 = int(input("Number 2: "))
print(number1, "plus", number2, "is", number1 + number2)
print(number1, "times", number2, "is", number1 * number2)




line = input("Line: ")
line = line.split()
anyRobot = 0
for counter in range(len(line)):
  if line[counter] == 'robot':
    print("There is a small robot in the line.")
    anyRobot = 1
  elif line[counter] == 'ROBOT':
    print("There is a big robot in the line.")
    anyRobot = 1
  else:
    line[counter] = line[counter].lower()
    if line[counter] == 'robot':
      print("There is a medium sized robot in the line.")
      anyRobot = 1
if anyRobot == 0:
  print("No robots here.")






current = int(input("Current floor: "))
destination = int(input("Destination floor: ")) + 1
while current != destination:
  print("Level", current)
  current = current + 1





print("What is my favourite food?")
guess = input("Guess? ")
while guess != "electricity":
  print("Not even close.")
  guess = input("Guess? ")
print("You guessed it! Buzzzz")
