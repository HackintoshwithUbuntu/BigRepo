loop = int(input())
dates = []
for y in range(loop):
    dates.append(input())
for i in range(loop):
    date = dates[i]
    full = int(date[:4])
    c = int(date[0:2])
    y = int(date[2:4])
    m = int(date[5:7])
    d = int(date[8:10])

    if year % 4 == 0 and year % 100 != 0:

    if m == 1: 
        m = 11
        y -= 1
    elif m == 2:
        m = 12
        y -= 1
    else:
        m -= 2


    ans = (d + int((2.6 * m) - 0.2) + y + int(y/4) + 5*c + int(c/4)) % 7
    week = ["Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"]
    print(f'{date} is a {week[ans]}')

