#python program to display a matrix

#design user-defined function
def display_matrix(matrix):
    """Display a matrix."""
    for row in matrix:
        for element in row:
            print(element, end=" ")
        print()  # Move to the next line for the next row

def main():
    # Get the dimensions of the matrix from the user
    rows = int(input("Enter the number of rows: "))
    cols = int(input("Enter the number of columns: "))

    # Initialize an empty matrix
    matrix = []

    # Get the elements of the matrix from the user
    for i in range(rows):
        row = []
        for j in range(cols):
            element = int(input(f"Enter element at position ({i + 1}, {j + 1}): "))
            row.append(element)
        matrix.append(row)

    # Display the matrix
    print("\nEntered matrix is: ")
    display_matrix(matrix)

if __name__ == "__main__":
    main()
