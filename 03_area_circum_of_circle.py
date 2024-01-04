# Python program to ask user for radius and calculate area and circumference of circle

import math   #imported math library for pi
#ask user for radius
rad=float(input("Enter radius of circle: "))

#calculate area and circumference
area= math.pi * (rad**2)
circum= 2* math.pi * rad

#print result
print("Area of circle with radius ", rad, " is: ", area)
print("Circumference of circle of radius ", rad, " is: ", circum)
