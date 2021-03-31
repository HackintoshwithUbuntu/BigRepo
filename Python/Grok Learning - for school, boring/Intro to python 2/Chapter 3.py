for line in open('orders.txt'):
  print(line.strip().upper())






file = open("letter.txt")
fixed = open("fixed.txt", "w")
for line in file:
  if "WOOF!" not in line:
    print(line.strip(), file=fixed)




file = open("book.txt").read().lower()
word = input("Word to look for: ")
if word in file:
  print(word, "was found in the book.")
else:
  print(word, "was not found in the book.")





file = open("input.txt").read().lower()
file = file.split("\n")
final = []
counter = 0
counter2 = -1
for line in file:
  counter = counter + 1
  if line.count("a") >= 3 and line.count("r") >= 2 and line.count("d") >= 1 and line.count("v") >= 1 and line.count("k") >= 1:
    final.append(counter)
for numbers in final:
  counter2 = counter2 + 1
  print("Aardvark on line", final[counter2])