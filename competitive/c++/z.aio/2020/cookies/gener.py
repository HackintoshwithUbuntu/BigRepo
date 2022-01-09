from random import randint

f = open("tests.txt", "w+")
for i in range(1000):
    d = randint(1, 10000)
    c0 = randint(1, 10000)
    p1 = randint(1, 10000)
    p2 = randint(1, 10000)
    c1 = randint(0, 10000)
    c2 = randint(0, 10000)
    f.write(str(d) + ' ')
    f.write(str(c0) + ' ')
    f.write(str(p1) + ' ')
    f.write(str(c1) + ' ')
    f.write(str(p2) + ' ')
    f.write(str(c2) + ' ')

