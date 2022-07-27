x1 = int(input())
v1 = int(input())
x2 = int(input())
v2 = int(input())

t = (x2 - x1) / (v1 - v2)

if v1 > v2:
    print(t)
else:
    print("He will not be able to catch the bus")