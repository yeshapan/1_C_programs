#Python program to print first 15 natural numbers and their sum using for loop

#print first 15 natural numbers
print("First 15 natural numbers are: ")
for i in range(15):
  print(i+1)

#calculate and print sum
sum=0
for i in range(15):
  sum= sum + (i+1)

print("Sum of first 15 natural numbers is: ", sum)
