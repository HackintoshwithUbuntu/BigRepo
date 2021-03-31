foo = input("Treat? ")
if foo == "Pastry":
    print("Buttery flaky goodness")
elif foo == "Cake":
    print("A light and fluffy classic")
elif foo == "Cookie":
    print("Warm and crispy on the edges")
else:
    print("We do not sell that. It sounds yum!")





foo = int(input("Wind speed? "))
if foo < 10:
    print("No flying today.")
elif foo > 40:
    print("Dangerous wind conditions!")
else:
    print("Perfect kite weather!")







foo = input("Sentence? ")
bar = foo.replace("Voldemort", "You Know Who")
print(bar)






foo = input("Message? ")
bar = foo.replace("mandrake", "TOP SECRET")

if bar == foo:
    print("No words are top secret")
else:
    print(bar)






foo = input("Book title? ")
print(foo)
for i in foo:
    print(i)






foo = input("Guard word? ")

bar = foo.replace("s" , "b")

for i in bar:
    print(i)
print(bar)







from turtle import *

length = int(input("Length? "))

pencolor("pink")
pensize(5)

for i in range(6):
    forward(length)
    left(60)
    backward(length/2)






from turtle import *

length = int(input("How many pancakes? "))

pencolor("wheat")
pensize(6)
penup()
backward(50)

for i in range(length):
    pendown()
    forward(100)
    penup()
    right(90)
    forward(10)
    right(90)
    forward(100)
    left(180)






