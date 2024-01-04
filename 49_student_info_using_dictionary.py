#Python program to store student's information using structures (dictionaries)

def get_student_info():    #design function to get student's information from user
    """Get student information from the user."""
    student_info = {}  # Dictionary to store student information

    # Get input from the user
    student_info['name'] = input("Enter student name: ")
    student_info['roll_number'] = input("Enter student roll number: ")
    student_info['age'] = int(input("Enter student age: "))
    student_info['grade'] = input("Enter student grade: ")

    return student_info

def display_student_info(student_info):     #design funtion to display student info
    """Display student information."""
    print("\nStudent Information:")
    print("Name:", student_info['name'])
    print("Roll Number:", student_info['roll_number'])
    print("Age:", student_info['age'])
    print("Grade:", student_info['grade'])

def main():
    # Get student information
    student_info = get_student_info()

    # Display student information
    display_student_info(student_info)

if __name__ == "__main__":
    main()
