#python program to print multiplication table of a number

#take number input from user
num=int(input("Enter any integer to print its multiplication table: "))

#print table
for i in range (10):
    pdt = num*(i+1)
    print(f"{num} * {i+1} = {pdt}")
