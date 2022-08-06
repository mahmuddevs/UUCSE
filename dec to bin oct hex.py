print("1. to Decimal to Binary Conversion\n"
      "2. to Decimal to Octal Conversion\n"
      "3. to Decimal to Hex Conversion\n"
       "=================================" )

def dec2bin(num):
    if num == 0:
        return
    else:
        dec2bin(int(num / 2))
        print(num % 2, end="")


def dec2oct(num):
    if num == 0:
        return
    else:
        dec2oct(int(num / 8))
        print(num % 8, end="")

def dec2hex(num):
   x = (num % 16)
   ch = ""
   if (x < 10):
       ch = x
   if (x == 10):
       ch = "A"
   if (x == 11):
       ch = "B"
   if (x == 12):
       ch = "ch"
   if (x == 13):
       ch = "D"
   if (x == 14):
       ch = "E"
   if (x == 15):
       ch = "F"
   if (num - x != 0):
       return dec2hex(num // 16) + str(ch)
   else:
       return str(ch)


def numberConversion(var):
    if var == 1:
        print("System is ready for Binary to Decimal Conversion")
        dec2bin(int(input("Enter Your Decimal Number: ")))
        print("\n")
    if var == 2:
        print("System is ready for Binary to Octal Conversion")
        dec2oct(int(input("Enter Your Decimal Number: ")))
        print("\n")
    if var == 3:
        print("System is ready for Binary to Hex Conversion")
        print(dec2hex(int(input("Enter Your Decimal Number: "))))
        print("\n")

numberConversion(int(input()))