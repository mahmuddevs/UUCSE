
num = int(input("Enter a number: "))

not_prime = False

if num > 1:
    # check for factors
    for i in range(2, num):
        if (num % i) == 0:
            not_prime = True

            break


if not_prime:
    print(num, "is not a prime number")
else:
    print(num, "is a prime number")
