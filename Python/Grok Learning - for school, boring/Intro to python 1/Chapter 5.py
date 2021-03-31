foo = input("Cheer: ")
for c in foo:
  print("Give me a " + c +", " + c + "!" )
  
print("What does it spell?")
print(foo.upper())






foo = input("Enter a number: ")

for i in foo:
  print(i)






foo = input("Line: ")
txt = foo[::-1]
print(txt)




foo = input("Message? ")
output = ""

for i in range(0, len(foo), 3):
  output = output + foo[i] + ' '
print(output.rstrip())