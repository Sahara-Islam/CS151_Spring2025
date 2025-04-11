'''
    Write a program that calculates and displays the factorial of a user-defined integer.
    The factorial of a number is the product of the number and the numbers prior up to 1.
    For example 5 facorial (5!) is:
    
    5 * 4 * 3 * 2 * 1 = 120

    Validate the user-defined integer. Ensure the user enters a positive number.
    Note: 0! = 1
'''

if __name__ == "__main__":
    ...

num = int(input("Enter a positive number: "))


if num < 0:
    print("Sorry, factorial does not exist for negative numbers.")
elif num == 0:
    print("The factorial of 0 is 1.")
else:
    factorial = 1
    i = 1
    while i <= num:
        factorial *= i
        i += 1

    print("The factorial of", num, "is", factorial)
