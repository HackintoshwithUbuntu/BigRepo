band = input('Favourite band? ')
print(f'{band} rules!')






name = input("Name? ")
print(f"{name}don") 





book = input("What is your favourite book? ")

if book == "Watership Down":
  print("Yes! Bigwig is awesome!")
else:
  print("I like that, but it should have more rabbits.")







print("The Chinese zodiac calendar has 12 animals.")
animal = input("Which animal are you? ")
if animal == "rat":
  print("2020 is the year of the rat!")
print("That is a cool animal!")







trick = int(input("How many tricks? "))
if trick > 24:
  print("New world record!")
else:
  print("No record yet. Keep training!")






tree = int(input("How many palm trees so far? "))
if tree < 6:
  print("No beach yet.")
else:
  print("You have reached the beach!")








from turtle import *
pencolor('orange')
pensize(5)
forward(80)
left(120)
forward(80)
left(120)
forward(80)
penup()
forward(20)
left(120)
pendown()
forward(100)








from turtle import *
psize = int(input("Size? "))
pencolor("green")
pensize(4)

def mountdraw(ssize):
  for i in range(3):
    forward(ssize)
    left(120)
    
mountdraw(psize)
penup()
forward(2*psize)
pendown()
mountdraw(psize*2)






