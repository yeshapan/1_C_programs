#Python program to find sum of elements in an array(list) and their average

#take number of list/array elements from user
n=int(input("Enter number of elements in the array: "))

#declare array and input elements
arr=[]
for i in range(n):
    num=int(input(f"Enter element {i+1}: "))
    arr.append(num)
    
#find and print sum and average
avg=sum(arr)/len(arr)    #avg=sum(arr)/n
print("Sum of array elements is: ", sum(num))
print(f"Average of array elements is: {avg}")
