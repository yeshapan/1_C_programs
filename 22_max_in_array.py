#Python program to find maximum number in an array(list)

#number of list elements
n=int(input("Enter number of elements in the array: "))

#declare array and input elements
arr=[]
for i in range(n):
    num=int(input(f"Enter element {i+1}: "))
    arr.append(num)
    
#find and print the maximum number
max_num= max(arr)
print("Maximum of entered numbers is: ", max_num)

        
