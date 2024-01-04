#Python program to check if a number is prime or not using function

import math

#design user-defined function to check fo prime
def is_prime(number):
    for i in range(int(math.sqrt(number))):
        if number%(i+1)==0:
            return False
        else:
            return True
            
            

#take input of number from user and check if prime or not            
num=int(input("Enter any integer: "))

result=is_prime(num)

if result==True:
    print("Entered number", num, " is a prime number")
else:
    print("Entered number ", num, "is not a prime number")


        
