# Student Class Implementation
## Problem Statement:
Design a class `Student` that represents a student with the following attributes:
- `name` (string)
- `rollNo` (integer)
- `age` (integer)
- `grade` (character)

### Functionalities:
1. **Constructor**:  
   - A default constructor that initializes:
     - `name` to an empty string (`""`)
     - `rollNo` to `0`
     - `age` to `18`
     - `grade` to `'F'`

2. **Setters**:
   - A method `setInfoStu()` that sets the student's `name`, `rollNo`, `age`, and `grade` with validations:
     - **Age Validation**: If the age is less than `18` or greater than `100`, the age is set to `18` and a message is displayed: `"Age should be between 18 and 100. Setting default age to 18."`
     - **Grade Validation**: If the grade is not between `'A'` and `'F'`, the grade is set to `'F'` and a message is displayed: `"Invalid grade. Setting default grade to 'F'".`

3. **Getters**:
   - A method `getInfoStu()` that prints the student's details: `name`, `rollNo`, `age`, and `grade`.

### Requirements:
- Use encapsulation by making attributes private.
- Implement public methods for setting and getting student information.
- Ensure proper validation of input values for `age` and `grade`.

---


