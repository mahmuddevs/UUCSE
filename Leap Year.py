year = int(input())

if year % 4 == 0 and (year % 400 == 0 or year % 100 != 0):
        print(f"{year} is a leapyear")

else:
    print(f"{year} is not a leapyear")

