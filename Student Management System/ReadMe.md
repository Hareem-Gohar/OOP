
# Student Grades Management System

## Problem Statement

The task is to develop a **Student Grades Management System** using C++ that allows the management of student grades. The system provides various functionalities such as adding grades, removing grades, displaying grades for individual students, calculating class average, and finding the highest and lowest grades for both individual students and the entire class.

### Features of the system:
1. **Add Grade**: Add grades for students (with validation).
2. **Remove Grade**: Remove a specific grade for a student.
3. **Display Grades for a Student**: Show all grades of a student.
4. **Display Class Average**: Calculate and display the average grade of all students in the class.
5. **Find Highest and Lowest Grade for a Student**: Display the highest and lowest grades for a specific student.
6. **Display Highest and Lowest Grade in the Class**: Find the highest and lowest grades in the entire class.

## Functions Used

1. **getGradesCount(string& name)**:
   - Returns the number of grades for a student.
   
2. **hasGrade(string& name)**:
   - Checks if the student has any grades assigned.
   
3. **addGrade(string& name, int grade)**:
   - Adds a grade for a student after validating that the grade is between 0 and 100.
   
4. **removeGrade(string& name, int grade)**:
   - Removes a specific grade for a student. If no grades are left, the student is removed from the system.
   
5. **displayAllGrades(string& name)**:
   - Displays all grades for a specific student.
   
6. **displayClassAvg()**:
   - Displays the average of all grades in the class.
   
7. **findStudentHighestLowest(string& name)**:
   - Finds and displays the highest and lowest grades for a specific student.
   
8. **findClassHighestLowest()**:
   - Finds and displays the highest and lowest grades for the entire class.

## What I Learned

In this project, I learned the following:

1. **Use of `map` in C++**:
   - A `map` is used to store student names as keys and their grades as values (stored in a `vector<int>`). I learned how to efficiently store and access data using the `map` container.
   
2. **Iterating over Collections**:
   - I learned how to iterate over `map` and `vector` collections using iterators and range-based for loops to perform operations like calculating averages and finding minimum/maximum values.
   
3. **Conditional Statements**:
   - I implemented conditional checks to validate user input and ensure only valid grades (between 0 and 100) are added. Also, I used conditions to ensure proper error handling for invalid actions like trying to remove a grade that does not exist.
   
4. **Functions and Parameters**:
   - I gained hands-on experience in creating and using functions with parameters and return types to break down complex tasks into manageable operations. Each function encapsulates a specific task related to grade management.
   
5. **Error Handling and User Interaction**:
   - I improved my skills in user interaction, handling incorrect inputs gracefully, and providing appropriate error messages when something goes wrong.

6. **Using STL Algorithms**:
   - I learned how to use STL algorithms such as `find`, `max_element`, and `min_element` to efficiently find elements in containers like vectors.

## Concepts Implemented

1. **Data Structures**:
   - **`map`**: Used to store student names as keys and their grades as a vector of integers as values.
   - **`vector<int>`**: Used to store the grades for each student.
   
2. **Control Structures**:
   - **`if-else` statements**: Used to check if a student exists and has grades before performing operations like adding or removing grades.
   - **`for` loop**: Used to iterate through lists of grades and calculate statistics like averages and highest/lowest grades.

3. **C++ Standard Library**:
   - **`map`**: To map student names to their grades.
   - **`vector`**: For storing the list of grades.
   - **`find`**: To check if a specific grade exists in a student's grade list.
   - **`max_element` and `min_element`**: Used to find the highest and lowest grades in the list of grades for a student or the entire class.
   
4. **Input/Output**:
   - **`cin` and `cout`**: Used for user interaction, taking inputs, and displaying outputs.

5. **Error Handling**:
   - Checks for valid grade values and appropriate actions when attempting to remove a grade or perform other operations on non-existent data.
