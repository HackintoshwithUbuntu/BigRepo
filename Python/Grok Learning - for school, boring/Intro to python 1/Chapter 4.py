line = input("Enter line: ")
if "aardvark" in line:
  print("Aardvark!")
else:
  print("No aardvarks here :(")





foo = input("Loud: ")
bar = foo.lower()
print("Quiet: " + bar)






foo = input("What did she say? ")
foo = foo.replace("###", "o")
foo = foo.replace("##","e")
foo = foo.replace("%%","a")

print("She meant to say: " + foo)






name = input("Enter your name: ")
foo = len(name)

if foo <= 3:
  print("Hi " + name + ", you have a short name.")
elif foo >= 8:
  print("Hi "+ name+ ", you have a long name.")
else:
  print("Hi "+ name+ ", nice to meet you.")