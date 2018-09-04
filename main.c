/* This program will print the fibonacci sequence, n number of times, which is given by the user.
*
* Author: Cesar Alejandro Arias Perales
* Date: September 3, 2018
* Mail: a01411995@itesm.mx
*
*/

#include <stdio.h>

int main() {
        int n; // This variable represents the number of terms from the Fibonacci Sequence the user would like.
        int num1 = 0; // The first number of the sequence is 0
        int num2 = 1; // The second number is 1
        int fibonacci; // This variable will be given by the addition of the previous numbers

        printf("Tell me how many numbers from the Fibonacci sequence would you like: \n");  // Here the user must say how many numbers would he like
        scanf("%i", &n);

        printf("The fibonacci sequence is: ");

        for (int i=1; i<=n; i++) {  // The loop starts here, in order to get the following numbers
            printf("%i, ", num1);
            fibonacci = num1 + num2; // As previously stated, the third and following numbers will be given by the addition of the previous two
            num1 = num2; // The value that previously was previously assigned as num1 will pass to num2
            num2 = fibonacci; // And that value will be passed once again
        }
        return 0;
}
