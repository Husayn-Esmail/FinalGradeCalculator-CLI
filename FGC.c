#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>

void validateScanf(int n) {
    if (n > 1 || n < 1){ 
        printf("Invalid value for scanf, exiting...\n");
        exit(0);
    }
    return;
}

int main(void) {  // add int argv,char *argv[] for command line args
    // detects if using redirection operator or not
    bool redirect;    
    (isatty(STDIN_FILENO)) ? (redirect = false) : (redirect = true); 
    // gets number of grades that will be processed
    int numGrades;
    if (!redirect) printf("Enter the number of grades you will be inputting: ");
    int nGi = scanf("%d", &numGrades);
    validateScanf(nGi);

    // create list of grade structs to store based on grades ot be processed
    float grades[numGrades], grade, weight;
    // get grades;
    for (int i = 0; i < numGrades; i++) { 
        // get grade
        if (!redirect) printf("Enter grade %d: ", i+1);
        int gi = scanf("%f", &grade);
        validateScanf(gi);
        // get weight
        if (!redirect) printf("Enter weight: ");
        int wi = scanf("%f", &weight);
        validateScanf(wi);

        // calculate and add grade to list based on weight
        grades[i] = (grade * (weight/100)); 
    } 
    // get weight of final
    float weightOfFinal;
    if (!redirect) printf("Enter weight of final: ");
    int wfi = scanf("%f", &weightOfFinal);
    validateScanf(wfi);

    // output average based on the increments requested.
    int increments; 
    if (!redirect) printf("Enter increments to display grades in (i.e. 1%%, 5%%, 10%%): ");
    int ii = scanf("%d", &increments); 
    validateScanf(ii);

    // calculate average
    float average = 0.0;
    // calculates average before final mark:
    for (int i = 0; i < numGrades; i++) {
        average += grades[i];
    }

    printf("Exam mark | Final Grade | Letter Grade (coming soon)\n");
    for (int i = 0; i < 101; i+=increments) {
        float final = ((float)i) * (weightOfFinal/100);
        average += final;
        printf("%9d%%| %10.2f%% |\n", i, average);
        average -= final;
    }
    
    return 0; 
}
