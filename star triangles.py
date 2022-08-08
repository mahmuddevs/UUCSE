#3 in one
n = int(input())

for x in range(1, n+1):
    print("  " * (n-x) + "* " * x)



#half
n = int(input())

for x in range(n):
    for y in range(x+1):
        print("* ", end="")
    print()

#reverse half
n = int(input())

for x in range(n, 0, -1):
    for y in range(x):
        print("* ", end="")
    print()
