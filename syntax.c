/* This is my first c program.
Bronson Hill, February, 2023 
*/

# include <stdio.h> // imports standard io library
# include <stdlib.h> // imports standard library
# define A_DOZEN 12 // defines constant 
# define ERROR_MSG_101 "Error occurred"

int main(int argc, char const *argv[]){ // main function that always occurs
    /* code */
    int sum = 0;
    int next;

    // while (scanf("%d", &next) == 1){ //scanf returns the number of objects read
    //     sum = sum+next;
    //     printf("The sum of the numbers is %d\n", sum);
    //     /* code */
    // } 

    printf("The sum of the numbers is %d\n", sum);
    
    // Create variables
    int myNum = 15;            // Integer (whole number)
    float myFloatNum = 5.99;   // Floating point number
    char myLetter = 'D';       // Character

    // Print variables with format specifiers
    printf("%d\n", myNum);      // %d for integers
    printf("%10.2f\n", myFloatNum); // %f for floats
    printf("%c\n", myLetter);   // %c for characters

    // Force data type conversion
    double percent = (double)2/4;

    return 0;
}

int func(){
    return 0;
}