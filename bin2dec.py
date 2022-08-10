num = int(input("Enter the Binary Number: "))

sum = 0

i = 0

while num != 0:
    rem = num % 10
    sum = sum + rem * (2**i)
    num = int(num/10)
    i = i+1

print(sum)
