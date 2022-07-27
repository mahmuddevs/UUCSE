
num = int(input("Enter a number: "))

prime = False

if num > 1:
    # check for factors
    for i in range(2, num):
        if (num % i) == 0:
            prime = True

            break


if prime:
    print(num, "is not a prime number")
else:
    print(num, "is a prime number")