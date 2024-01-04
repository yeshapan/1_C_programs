# Python program to calculate factorial of a number

#design user-defined functio nto calculate factorial
def calculate_factorial(number):
  if number==0 or number==1:
    return 1
  else:
    return number * calculate_factorial(number-1)

#main program starts here
#take input of number
num=int(input("Enter any integer: "))
#check if factorial valid and calculate factorial
if num<0:
  print("Factorial not valid for negative numbers!")
else:
  factorial = calculate_factorial(num)
  print(f"Factorial of entered number {num} is: {factorial}")
