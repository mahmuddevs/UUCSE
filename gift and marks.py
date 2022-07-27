n = int(input())
marks = list(map(int, input().split()))

highest = marks[0]
lowest = marks[0]
gift = 0

for x in range(len(marks) - 1):
    if marks[x + 1] > highest:
        gift += 1
        best = marks[x + 1]
    if marks[x + 1] < lowest:
        lowest = marks[x + 1]


print(gift)
print(gift - marks.count(lowest))