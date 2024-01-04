# Python program to find sum of five numbers and print their average

def calculate_sum(numbers):
    """Calculate the sum of a list of numbers."""
    return sum(numbers)

def calculate_avg(numbers):
    """Calculate the average of a list of numbers."""
    return sum(numbers) / len(numbers)

def main():
    # Get five numbers from the user
    numbers = []   #declared list
    for i in range(5):
        num = float(input(f"Enter number {i + 1}: "))
        numbers.append(num)

    # Calculate sum and average
    sum_num = calculate_sum(numbers)
    avg = calculate_avg(numbers)

    # Display the results
    print("Sum of the numbers: ", sum_num)
    print("Average of the numbers: ", avg)

if __name__ == "__main__":
    main()
