//NAME: UDHEDHE WISDOM 
//DEPARTMENT: SOFTWARE ENGINEERING
//MATRIC: CMP2307625
#include <stdio.h>

int main() {
    int number;

    //This Section ASK the user for input
    printf("Enter an integer: ");
    scanf("%d", &number);

    //This Section Checks if the number is an even or a odd number 
    if (number % 2 == 0) {
        printf("%d is even.\n", number);
    } else {
        printf("%d is odd.\n", number);
    }

    return 0;
}
