#!/usr/bin/python3

def is_palindromic(number):
    # convert the number to a string
    num_new = str(number)
    check = False
    if num_new == num_new[::-1]:check = True
    return check

def product(num1,num2):
    product = num1*num2
    return product

def num_generation(numOfDigits):
    start = 10**(numOfDigits-1)
    ending = 10**numOfDigits
    listo = []
    p1 = 0
    p2 = 0
    for number1 in range(start,ending,1):
        for number2 in range(start,ending,1):
            prod = product(number1,number2)
            if is_palindromic(prod):
                p1 = number1
                p2 = number2
            listo.append(prod)
            maximum = max(listo)
    return maximum, p1, p2

if __name__ == "__main__":
    num,p1,p2 = num_generation(2)
    print(num,p1,p2)
