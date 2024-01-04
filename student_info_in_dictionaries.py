#Python program to store student information using dictionaries

#design function to add student record
def add_student(student_list, name, age, grade):
    """Add a student to the list."""
    student = {"Name": name, "Age": age, "Grade": grade}
    student_list.append(student)

#design function to display records of students
def display_students(student_list):
    """Display the information of all students."""
    if not student_list:
        print("No students in the list.")
    else:
        print("Student Information:")
        for idx, student in enumerate(student_list, start=1):
            print(f"Student {idx}:")
            for key, value in student.items():
                print(f"  {key}: {value}")
            print()

def main():
    # Initialize an empty list to store student information
    students = []

    # Add students to the list
    add_student(students, "Nesta Archeron", 26, "A")
    add_student(students, "Elain Archeron", 23, "C")
    add_student(students, "Feyre Archeron", 21, "B")

    # Display student information
    display_students(students)

if __name__ == "__main__":
    main()
