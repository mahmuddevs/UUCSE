num = int(input("Enter A Binary Value: "))

dec = 0

power = 0

while num != 0:
    rem = num % 10
    dec = dec + rem * (2 ** power) #(if we use 8 instead of 2 here it will convert octal to decimal)
    num = num // 10
    power += 1

print(dec)
