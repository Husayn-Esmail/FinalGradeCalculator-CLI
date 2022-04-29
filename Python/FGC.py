#!/usr/bin/env python3
# the above line makes this python program executable (assuming you chmod +x)

def main():
    numGrades = input("Enter the number of grades you will be inputting: %d")
    grades = []
    for grade in range(0,numGrades):
        # on second thought this clarification of input is really confusing.
        # need to fix this. 
        user_grade = input("Enter grade (integer): %d")
        grades.append(user_grade)
        weight = input("Enter weight (integer): %d")

