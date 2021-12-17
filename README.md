# FinalGradeCalculator-CLI
A final grade calculator command line tool.
Work in progress.
WARNING: the code is not good yet. it works but it's not good. 
Functionality so far:
Asks user to input grades in percentage format and their respective weights.
Then asks for the weight of the final.
Finally asks what increments the user would like to use to output their final grade based on their exam score.
Outputs the grades (%) in respect to the chosen increments. 

Currently the program can detect when redirection is being used and skip printing the interface or if it's not being used,
provide a user interface.

Future Plans:
1. Add command line arguments
2. Add option to input cutoffs to export letter grades
3. Add equation processing so the percentage doens't need to be calculated by the user first. 
4. Continuous Loop for the program

Sample input.txt:
[input.txt](https://github.com/Husayn-Esmail/FinalGradeCalculator-CLI/files/7731868/input.txt)

in the format:
number of Grades (excluding final)
(grade, weight)  
(grade, weight)  
(grade, weight)    
final weight    
increment        





