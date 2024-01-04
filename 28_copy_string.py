# Python program to copy one string into another

#design function to copy one string into another
def copy_string(original):
    """Copy one string into another."""
    copied_str = original[:]
    return copied_str

def main():
    # Get the original string from the user
    original_str = input("Enter the original string: ")

    # Copy the string
    copied_str = copy_string(original_str)

    # Display the result
    print(f"Original String is: {original_str}")
    print(f"Copied String is: {copied_str}")

if __name__ == "__main__":
    main()
