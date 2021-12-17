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
                   ------------------------------------------------------
#Grades            |3                                                   |
(grade, weight)    |83.3333333 30                                       |
(grade, weight)    |90 20                                               | 
(grade, weight)    |92.5 20                                             | 
final weight       |30                                                  |
increment          |10                                                  |
                   |                                                    |
                   |                                                    |
                   |                                                    |
                   |                                                    |        
                   |                                                    |
                   ------------------------------------------------------




