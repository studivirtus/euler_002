x = 0
y = 1
c = 0
sum = 0

while(x < 4000000):
    if c == 3:
        sum = sum + x
        c = 0
    t = x
    x = y + x
    y = t
    c = c + 1
    #print(x)
print(sum)
