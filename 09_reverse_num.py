# Python program to reverse a given number

#input an integer
num= int(input("Enter any integer: "))

#reverse number
rev_num=0
while num>=0:
  remain = num%10
  rev_num = (rev_num*10) + remain
  num = num/10

#print reversed number
print("Reversed number is: ", rev_num)
