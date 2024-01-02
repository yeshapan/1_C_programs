# Python program to check if entered number is even or odd using function

#define function
def is_odd(number):
	if number%2==0:
    	return "even"
    else:
    	return "odd"

#get number input from user
num=int(input("Enter any integer: "))
        
# print result
result=(is_odd(num))
print("Entered number is {result}")
