#watermelon
w = int(input())
if w <= 2 or w % 2 != 0:
    print("no")
else:
    print("yes")

#way to long words


 c = int(input())
    for i in range(c):
       w = input()
    if len(w) > 10:
       print(w[0] + str(len(w)-2) + w[-1])
    else:
       print(w)

#team
ttlable = []

e = int(input())
     
for i in range(e):
    able = input().split()
    n = 0
     
     if able.count("1") >= 2:
         n += 1
         ttlable.append(n)
print(sum(ttlable))


#team2
e = int(input())
n = 0
for i in range(e):
    able = input().split()


    if able.count("1") >= 2:
        n += 1
print(n)
