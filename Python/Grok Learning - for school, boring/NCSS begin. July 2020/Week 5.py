def roman_numeral(n):
  if n > 12:
    result = 'bad number'
  elif n <= 0:
    result = 'bad number'
  else:
    result = chr(8544 + n - 1)

  return result

if __name__ == '__main__':
  print(roman_numeral(1))
  print(roman_numeral(2))
  print(roman_numeral(10))
  print(roman_numeral(13))

  # Add your own testing after this.
  






  ### Write your function here
def is_teenager(age):
  if age >= 13 and age <= 19:
    return "Yes"
  elif age < 0:
    return "Error"
  else:
    return "No"


###


if __name__ == '__main__':
  print(is_teenager(14))
  print(is_teenager(60))

  # Add more testing here.
  







# Define your function here!
def redact(text, secret):
  new_message = text.replace(secret, '#')
  return new_message

if __name__ == '__main__':
  # You can use this to test your function.
  # Any code inside this if statement will be ignored by the automarker.
  
  # Test the first example in the question.
  print(redact('I hid the gold in the park.', 'park'))
  
  # Test the second example in the question.
  print(redact('The key is near, get the key!', 'key'))

  # You can add more tests here!
  








# Define your function here!
def record_check(new, old):
  if new < old:
    return "Record broken!"
  else:
    return "Record stays."


if __name__ == "__main__":
  # You can use this to test your function.
  # Any code inside this if statement will be ignored by the automarker.
  
  # Test the first example in the question.
  print(record_check(10.5, 11.2))

  # Test the second example in the question.
  print(record_check(55, 52))

  # You can add more tests here!
  







from turtle import *

def move_to(x, y):
  # Move the turtle without drawing
  penup()
  goto(x,y)
  pendown()

def draw_star(size):
  # Draw a star with code
  begin_fill()
  right(60)
  forward(size)
  left(120)
  forward(size)
  left(60)
  forward(size)
  left(120)
  forward(size)
  left(120)
  end_fill()


# This is our code that draws the Southern Cross.
# It's already correct - you don't need to change it!

# Set the background colour and star colour
bgcolor('black')
pencolor('yellow')
pensize(2)
fillcolor('yellow')
  
# Draw the southern cross
move_to(-10, 80)
draw_star(20)
move_to(-50, 10)
draw_star(18)
move_to(-11, -80)
draw_star(22)
move_to(50, 20)
draw_star(18)
move_to(40, -10)
draw_star(10)
move_to(0, 0)








from turtle import *

# Put your function here
def draw_tile(x,y,colour):
  fillcolor(colour)
  penup()
  goto(x,y)
  pendown()
  begin_fill()
  for i in range(6):
    forward(30)
    right(60)
  end_fill()



# Our code to draw tessellating tiles
draw_tile(-120, -30, 'coral')
draw_tile(-120, 22, 'gold')
draw_tile(-120, 74, 'turquoise')
draw_tile(-75, -4, 'lawngreen')
draw_tile(-75, 48, 'purple')
draw_tile(-30, -30, 'maroon')
draw_tile(-30, 22, 'magenta')
draw_tile(-30, 74, 'coral')
draw_tile(15, -4, 'white')
draw_tile(15, 48, 'cornflowerblue')
draw_tile(60, -30, 'coral')
draw_tile(60, 22, 'turquoise')
draw_tile(60, 74, 'lawngreen')







from turtle import *

# Define your function here!
def firework(colour, x, y):
  pensize(4)
  pencolor(colour)
  penup()
  goto(0,-150)
  pendown()
  goto(x,y)
  for i in range(10):
    forward(50)
    backward(50)
    left(36)




# Call your function here to draw the four fireworks
# We've started you off with the background and 2 fireworks
bgcolor('#000000') 
firework('#0085C7', 30, 40)
firework('#009F3D', -50, 80)
# Draw the yellow and red fireworks by calling your function here
firework('#F4C300', -50, -40)
firework('#DF0024', 40, -60)







from turtle import *

def draw_bolt(size):
  # Draw a lightning bolt.
  pendown()
  pensize(size)
  pencolor(255, 255, 0)
  forward(70)
  left(120)
  forward(20)
  right(120)
  forward(70)
  penup()
  goto(0,0)
  
def draw_ball(num_bolts):
  # Call the draw_bolt function to draw a lightning ball.
  bgcolor(0,0,80)
  angle = 360/num_bolts
  for i in range(num_bolts):
    draw_bolt(i+1)
    left(angle)

if __name__ == "__main__":
  # Test a single fan blade:
  # You can change the 4 to test different sized bolts.

  # Test a fan with 7 blades:
  # Uncomment the draw_ball(7) line when you want to test the whole lightning ball.
  draw_ball(7)


