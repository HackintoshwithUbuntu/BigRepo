time = int(input("Time to launch: "))
print("Counting down ...")
while time > 0:
  print(str(time) + " ...")
  time-=1
print("Lift Off!")






print("What is my favourite food?")
command = ''

while command != 'electricity':
  command = input("Guess? ")
  if command != 'electricity':
    print('Not even close.')
    
print("You guessed it! Buzzzz")





floor = int(input("Current floor: "))
destination = input("Destination floor: ")

while int(floor) <= int(destination):
  print("Level", str(floor))
  floor+=1




foo = int(input("How many steps? "))

print("__")
i = 1
step = 2

for i in range(foo - 1):
  string = (" " * (step)) + "|_"
  step += 2
  print(string)

print((foo) * "__" + "|")