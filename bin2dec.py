bin = int(input("Enter A Binary Value: "))

dec = 0

power = 0

while bin != 0:
    rem = bin % 10
    dec = dec + rem * (2 ** power)
    bin = bin // 10
    power += 1

print(dec)
