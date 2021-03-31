foo = input("Team: ")
for c in foo:
  print("Give me a " + c.upper() + "!" )
  
print("What does that spell? " + foo.upper() + "!")






foo = input("What animal would you like? ")
bar = input("How many? ")

if foo.isupper() == True:
  print("Woah! No need to shout, you'll scare the animals!")
  
elif int(bar) == 0:
  print("That's sad. No pet for you today.")
elif int(bar) == 1:
  print("Great, here's your " + foo + "!")
elif int(bar) > 1:
  print("Ok! " + str(bar) , str(foo) + "s coming right up!")

  






def is_notable(name):
  # Write your function here.
  if name[0] == "N" and len(name) > 4:
    return True
  else:
    return False

# Write the rest of your program here.
foo = input("Type a nickname: ")

if is_notable(foo) == True:
  print("That nickname is notable!")
else:
  print("That nickname is not so notable!")
           





def cups_to_grams(cups, density):
  # Convert cups to grams here.
  # The density is in grams-per-cup.
  answer = round(cups * density,1)
  return answer

# Write the rest of your program here
food = input("What food? ")
cups = float(input("How much in cups? "))
gpc = float(input("How many grams per cup? "))

print(str(cups), "cups of",food,"is", str(cups_to_grams(cups, gpc)),"grams.")







def to_celsius(f):
  # Calculate the temperature in Celsius
  answer = round((f-32) * 5/9,1)
  return answer

# Write the rest of your program here
fheight = float(input("Temp (F): "))
fheight = to_celsius(fheight)

if fheight < 5:
  print(fheight, "C - Crikey it's cold!")
elif fheight >= 5 and fheight < 20:
  print(fheight, "C - Getting a bit nippy!")
elif fheight >= 20 and fheight < 35:
  print(fheight, "C - You beaut beach weather!")
else:
  print(fheight, "C - Strewth, it's a scorcher!")








