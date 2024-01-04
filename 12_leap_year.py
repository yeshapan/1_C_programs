#python program to find if entered number is leap or not

#input the year
year=int(input("Enter any year: "))

#condition for leap year
if((year%4==0 and year%100!=0) or year%400==0):
  print("Entered year ", year," is a leap year")
else:
  print("Entered year ", year, " is not a leap year")
