Problem Statement:
Create a class Student that represents a student with the following attributes:

name (string)
rollNo (integer)
age (integer)
grade (character)
The class should include the following functionalities:

Constructor: A default constructor that initializes the student's name to an empty string, roll number to 0, age to 18, and grade to 'F'.

Setters:

A method setInfoStu() that allows setting the student's name, rollNo, age, and grade.
The method should include validation for the age:
If the age is less than 18 or greater than 100, set the age to 18 and display a message: "Age should be between 18 and 100. Setting default age to 18."
The method should also validate the grade:
If the grade is not between 'A' and 'F', set the grade to 'F' and display a message: "Invalid grade. Setting default grade to 'F'".
Getters:

A method getInfoStu() to print the student's details including name, age, rollNo, and grade.
Requirements:
Use encapsulation (private attributes) and access modifiers (public methods) for the setter and getter methods.
Ensure proper input validation for the age and grade.