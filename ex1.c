//
// Created by Yael on 18/11/2024.
//
/******************
Name: Yael Ronis
ID: 212258073
Assignment: Ex01
*******************/
#include <stdio.h>

// REMINDER : YOU CANT USE ANY CONTROL FLOW OPERATIONS OR FUNCTIONS, ONLY BITWISE.

int main(void) {

    // What bit
    printf("What bit:\n");
    /*Scan two integers (representing number and a position)
    Print the bit in this position. */
    int num,pos;
    printf("Please enter a number:\n");
    scanf("%d",&num);
    printf("Please enter a position:\n");
    scanf("%d",&pos);
    /*
        Move the position bit to LSB
        and turn off the other bits.
    */
    int bitInPos = (num >> pos) & 1;
    printf("The bit in position %d of number %d is: %d\n",pos,num,bitInPos);

    // Set bit
    printf("\nSet bit:\n");
    /*Scan two integers (representing number and a position)
    Make sure the bit in this position is "on" (equal to 1)
    Print the output
    Now make sure it's "off" (equal to 0)
    Print the output */
    printf("Please enter a number:\n");
    scanf("%d",&num);
    printf("Please enter a position:\n");
    scanf("%d",&pos);
    // Move "1" to the position,  and turn on the bit in these position
    int turnOn = 1 << pos;
    int numOn = num | turnOn;
    printf("Number with bit %d set to 1: %d\n",pos,numOn);
    /*
     * Make all bits "1" except the bit in the position - change him to "0"
     * and turn off the bit in this position.
     */
    int turnOff = ~turnOn;
    int numOff = num & turnOff;
    printf("Number with bit %d set to 0: %d\n",pos,numOff);


    // Toggle bit
    printf("\nToggle bit:\n");
    /*Scan two integers (representing number and a position)
    Toggle the bit in this position
    Print the new number */
    printf("Please enter a number:\n");
    scanf("%d",&num);
    printf("Please enter a position:\n");
    scanf("%d",&pos);
    // Change the bit in the position. xor 0,1 is 1 and xor 1,1 is 0
    int numToggle = num ^ (1 << pos);
    printf("Number with bit %d toggled: %d\n",pos,numToggle);


    // Even - Odd
    printf("\nEven - Odd:\n");
    /* Scan an integer
    If the number is even - print 1, else - print 0. */
    printf("Please enter a number:\n");
    scanf("%d",&num);
    /*
     *  Keep the LSB of the number. By doing '&' with '1' it turns off all the bits
     *  except of the LSB. If LSB = 0 the number is even and if LSB = 1 the number is odd.
     *  Xor with '1' changes the bit and then even will print '1' and odd will print '0'
     */
    int evenOrOdd = (num & 1) ^ 1;
    printf("%d\n",evenOrOdd);


    // 3, 5, 7, 11
    printf("\n3, 5, 7, 11:\n");
    int numOctFirst,numOctSecond;
    printf("Please enter the first number (octal):\n");
    scanf("%o",&numOctFirst);
    printf("Please enter the second number (octal):\n");
    scanf("%o",&numOctSecond);
    int sum = numOctFirst + numOctSecond;
    printf("The sum in hexadecimal: %X\n",sum);
    int bitPos3 = (sum >> 3)&1;
    int bitPos5 = (sum >> 5)&1;
    int bitPos7 = (sum >> 7)&1;
    int bitPos11 = (sum >> 11)&1;
    printf("The 3,5,7,11 bits are: %d%d%d%d\n",bitPos3,bitPos5,bitPos7,bitPos11);
    /* Scan two integers in octal base
    sum them up and print the result in hexadecimal base
    Print only 4 bits, in positions: 3,5,7,11 in the result. */

    printf("Bye!\n");

    return 0;
}
