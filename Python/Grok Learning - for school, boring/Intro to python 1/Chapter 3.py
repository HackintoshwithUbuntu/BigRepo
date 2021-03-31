foo = input("What is the password Ali? ")
if foo == "Open sesame!":
  print("The cave door opens!")





  
foo = input("Enter password: ")
if foo == "chEEzburg3rz":
  print("Access granted")
else:
  print("Access denied")





foo = int(input("Number: "))
if foo >= 0:
  print("In the black :)")
else:
  print("In the red :(")





weather = input("Is it currently raining? ")
if weather == "Yes":
  print("You should take the bus.")
elif weather == "No":
  distance = int(input("How far in km do you need to travel? "))
  if distance > 10:
    print("You should take the bus.")
  elif distance < 2:
    print("You should walk.")
  else:
    print("You should ride your bike.")