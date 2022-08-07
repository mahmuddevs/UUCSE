print("1. to Binary to Decimal Conversion\n"
      "2. to Octal to Decimal Conversion\n"
      "3. to Hex to Decimal Conversion\n"
       "=================================" )


def BinToDec(num):
    expo = 1
    dec_num = 0
    while (num):
        digit = num % 10
        num = int(num / 10)

        dec_num += digit * expo
        expo = expo * 2
    return dec_num


def OctToDec(num):
    dec_value = 0
    base = 1

    while num:
        last_digit = num % 10
        num = int(num / 10)
        dec_value += last_digit * base
        base = base * 8
    return dec_value


def hexToDec(num):
    hexToDecConversion = {'0': 0, '1': 1, '2': 2, '3': 3, '4': 4,
                          '5': 5, '6': 6, '7': 7, '8': 8, '9': 9,
                          'A': 10, 'a': 10, 'B': 11, 'b': 11, 'C': 12,
                          'c': 12, 'D': 13, 'd': 13, 'E': 14, 'e': 1,
                          'F': 15, 'f': 15}

    n = len(num) - 1
    dec = 0

    for i in num:
        dec += hexToDecConversion[i] * (16 ** n)
        n -= 1

    return dec

def numberConversion(var):
    if var == 1:
        print("System is ready for Binary to Decimal Conversion")

        num = int(input('Enter a binary number: '))

        print(f'The decimal value is : {BinToDec(num)}')
        print("\n")
    elif var == 2:
        print("System is ready for Octal to Decimal Conversion")
        num = int(input('Enter an octal number: '))
        print(f'The decimal value is: {OctToDec(num)}')
        print("\n")
    elif var == 3:
        print("System is ready for Hex to Decimal Conversion")
        num = input('Enter an octal number: ')
        print(f'The decimal value is: {hexToDec(num)}')
        print("\n")
    else:
        print("Invalid Input")

numberConversion(int(input()))