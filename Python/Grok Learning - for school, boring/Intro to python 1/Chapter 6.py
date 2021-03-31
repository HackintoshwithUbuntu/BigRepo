foo = input("Number: ")
foo = float(foo)/2

print("Half number: " + str(foo))





foo = input("Which days had rain? ")
days = foo.split()
print("Number of days without rain: " + str(7 - len(days)))






names = input("Students: ")
roll = names.split()
roll.sort()
print("Class Roll")
for i in roll:
  print(i)




foo = input("Enter the expenses: ")
data = foo.split()
total = 0

for i in data:
  total = total + int(i)
  
print("Total: $" + str(total))