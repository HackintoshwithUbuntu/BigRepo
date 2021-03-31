letter = input('Letter? ')
number = ord(letter)
print(number)






foo = int(input("Number? "))
bar = chr(foo)
print(bar)







command = input('Command? ')
letter1 = command[3]
letter2 = command[10]

print(letter1+letter2)







foo = input("Secret phrase? ")

first = foo[0]
last = len(foo)
last2 = foo[last - 1]
last3 = foo[last - 2]
last4 = foo[last - 3]
print("The password is " + first + last4 + last3 + last2 + "!")







# Encrypt word with a cipher
def encrypt(word):
  if word == '':
    return '<no-input>'

  first_letter = chr(ord(word[0]) + 2)
  last_letter = chr(ord(word[-1]) + 2)
  middle = word[-2:0:-1]  # this takes the middle out of the word and reverses it
  return f'{first_letter}{middle}{last_letter}'

# Add your code after this.
name = encrypt(input("Person? "))
print("Find " + name + ".")
name2 = encrypt(input("Location? "))
print("They will be at " + name2 + ".")
name3 = encrypt(input("Password? "))
print("The password is " + name3 + ".")






# Calculate the power of an emoji team
def emoji_power(team):
  power = 0

  for emoji in team:
    unicode_number = ord(emoji)
    power = power + unicode_number

  return power

# Add your code after this.
e1 = emoji_power(input("Emoji team 1: "))
e2 = emoji_power(input("Emoji team 2: "))

if e1 > e2:
    print("Team 1 wins!")
elif e1 == e2:
    print("A tie!")
else:
    print("Team 2 wins!")






from turtle import *
bgcolor("plum")
fillcolor("cornflowerblue")
pensize(10)
pencolor("royalblue")

sides = int(input("How many sides? "))
angle = 360/sides

begin_fill()
for i in range(sides):
    forward(40)
    left(angle)
end_fill()






from turtle import *

def draw_point(length):
  forward(length)
  right(120)
  forward(length)
  left(120)

# Write your code below!

bgcolor("black")
fillcolor("yellow")
pensize(4)
pencolor("gold")

points = int(input("How many points? "))
length = 200/points
angle = 360/points

begin_fill()
for i in range(points):
    draw_point(length)
    right(angle)
end_fill()






