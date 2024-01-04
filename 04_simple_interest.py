#Python program to calculate simple interest

#take principal amount, rate of interest and time period inputs from user
prin=float(input("Enter principal amount: "))
rate=float(input("Enter rate of interest: "))
time=float(input("Enter time period in years: "))

#calculate and print simple interest
si=((prin*rate*time)/100)
print("Simple Interest calculated is: ", si)
